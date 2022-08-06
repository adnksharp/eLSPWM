String CSS()
{
    String css = "* {\n";
    css += "\tfont-family: Arial, Helvetica, sans-serif;\n";
    css += "\tmargin: 0;\n";
    css += "}\n";

    css += "body {\n";
    css += "\tbackground: linear-gradient(205deg, #006868 0%, #39224e 100%);\n";
    css += "\theight: 100vh;\n";
    css += "}\n";

    css += "div {\n";
    css += "\tbackground-color: #ffffff2d;\n";
    css += "\tborder-radius: 10px;\n";
    css += "\tposition: absolute;\n";
    css += "\tpadding: 2vh;\n";
    css += "\twidth: 19vw;\n";
    css += "\theight: 28vh;\n";
    css += "\ttop: 35vh;\n";
    css += "\tleft: 40vw;\n";
    css += "}\n";

    css += "input, button {\n";
    css += "\tfont-size: 1.2em;\n";
    css += "\toutline: none;\n";
    css += "\twidth: 17.5vw;\n";
    css += "\tpadding: 0.5vw;\n";
    css += "\tmargin: 0.5vh 0 2vh 0;\n";
    css += "}\n";

    css += "button\n";
    css += "{\n";
    css += "\tmargin: 1.5vw 1vh;\n";
    css += "\tborder: none;\n";
    css += "\tborder-radius: 6px;\n";
    css += "\tcursor: pointer;\n";
    css += "}\n";

    css += "h6 {\n";
    css += "\tfont-size: 1.8em;\n";
    css += "}\n";

    css += "h3, h6, p {\n";
    css += "\tmargin: 3vh;\n";
    css += "\tcolor: white;\n";
    css += "\ttext-align: center;\n";
    css += "}\n";
    return css;
}

String Hindex()
{
    String html = "<!DOCTYPE html>\n";
    html += "<html lang=\" es \">\n";

    html += "<head>\n";
    html += "\t<meta charset=\" UTF - 8 \">\n";
    html += "\t<meta name=\" viewport \" content=\" width = device - width, initial - scale = 1.0 \">\n";
    html += "\t<title>Control PWM</title>\n";
    html += "\t<style>\n";

    html += CSS();

    html += "\t</style>\n";
    html += "</head>\n";

    html += "<body>\n";
    html += "\t<div>\n";
    html += "\t\t<h3>Control de salida PWM</h3>\n";
    html += "\t\t<form action='/pwm'>\n";
    html += "\t\t\t<input type=\" range \" name=\" out \" min=\" 0 \" max=\" 255 \" value=\" 50 \">\n";
    html += "\t\t\t<button type=\" submit \">Cambiar PWM</button>\n";
    html += "\t</div>\n";
    html += "</body>\n";

    html += "</html>";
    return html;
}

String Hindexi()
{
    String html = "<!DOCTYPE html>\n";
    html += "<html lang=\" es \">\n";

    html += "<head>\n";
    html += "\t<meta charset=\" UTF - 8 \">\n";
    html += "\t<meta name=\" viewport \" content=\" width = device - width, initial - scale = 1.0 \">\n";
    html += "\t<title>Login</title>\n";
    html += "\t<style>\n";

    html += CSS();

    html += "\t</style>\n";
    html += "</head>\n";

    html += "<body>\n";
    html += "\t<div>\n";
    html += "\t\t<form action='/login' method='post'>\n";
    html += "\t\t\t<input type=\" text \" name=\" User \" placeholder=\" Usuario \">\n";
    html += "\t\t\t<input type=\" password \" name=\" Passwd \" placeholder=\" Contraseña \">\n";
    html += "\t\t\t<button type=\" submit \">Iniciar Sesión</button>\n";
    html += "\t\t</form>\n";
    html += "\t</div>\n";
    html += "</body>\n";

    html += "</html>";
    return html;
}

String Hindex0()
{
    String html = "<!DOCTYPE html>\n";
    html += "<html lang=\" es \">\n";

    html += "<head>\n";
    html += "\t<meta charset=\" UTF - 8 \">\n";
    html += "\t<meta name=\" viewport \" content=\" width = device - width, initial - scale = 1.0 \">\n";
    html += "\t<title>Error 404</title>\n";
    html += "\t<style>\n";

    html += CSS();

    html += "\t</style>\n";
    html += "</head>\n";

    html += "<body>\n";
    html += "\t<div>\n";
    html += "\t\t<h6>Error 404</h6>\n";
    html += "\t\t<p>Página no encontrada</p>\n";
    html += "\t</div>\n";
    html += "</body>\n";

    html += "</html>";
    return html;
}