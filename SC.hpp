bool loged()
{
    printDisplay(true, 0, 0, "Revisando cookies...");
    if (server.hasHeader("Cookie"))
    {
        String cookie = server.header("Cookie");
        if (cookie.indexOf("ESPsession=1") != -1)
        {
            printDisplay(false, 0, 16, "Autenticacion exitosa");
            return true;
        }
    }
    printDisplay(false, 0, 16, "Autenticacion fallida");
    return false;
}

void H404()
{
    printDisplay(true, 0, 0, "Pagina no encontrada");
    server.send(404, "text/plain", Hindex0());
}

void Hlogin()
{
    printDisplay(true, 0, 0, "Iniciando sesion...");
    if (server.hasHeader("Cookie"))
    {
        String cookie = server.header("Cookie");
        printDisplay(false, 0, 16, "Cookie encontrada: " + cookie);
    }
    if (server.hasArg("User") && server.hasArg("Passwd"))
    {
        if (server.arg("User") == root() && server.arg("Passwd") == password())
        {
            server.sendHeader("Location", "/");
            server.sendHeader("Cache-Control", "no-cache");
            server.sendHeader("Set-Cookie", "ESPsession=1;HttpOnly");
            server.send(301);
            printDisplay(false, 0, 32, "Autenticacion exitosa");
        } 
    }
    server.send(200, "text/html", Hindexi());
}

void Hroot()
{
    String header;
    printDisplay(true, 0, 0, "Entrando a la pagina principal...");
    if (!loged())
    {
        server.sendHeader("Location", "/login");
        server.sendHeader("Cache-Control", "no-cache");
        server.send(301);
        return;
    }
    else
        server.send(200, "text/html", Hindex());
}