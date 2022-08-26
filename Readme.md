# PWM control using local http server with nodeMCU ESP8266

[![K-086.jpg](https://i.postimg.cc/bYVz2Ykf/K-086.jpg)](https://postimg.cc/jCNVpbMM)

Controlar salidas PWM de una placa ESP8266 con un servidor web local.

## Hardware y software necesarios
- Placa de desarrollo nodeMCU ESP8266.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).
- Librerías para el nodeMCU ESP8266.
    - `ESP8266WiFi`
    - `WiFiClient`
    - `ESP8266WebServer`
    - `Wire`
    - `Adafruit_GFX`
    - `Adafruit_SSD1306`

## Funcionamiento
### OLED
Funciones para controlar un display OLED de 128x64 pixels con el ESP8266:
- **setOLED()**: Inicializa el display OLED.
- **printDisplay()**: Imprime texto en el display OLED.

### SC
Funciones para controlar un servidor web local con el ESP8266:
- **serverBegin()**: Inicializa el servidor web local con las rutas:

    - ```/``` con **Hroot()**: Pagina principal si el usuario ha iniciado sesion.
    - ```/login``` con **Hlogin()**: Pagina de login.
    - ```/pwm``` con **Hroot()**: Pagina de control de PWM.
    - **error 404** con **H404()**: Pagina de error 404.

- **logedIn()**: Comprueba si el usuario ha iniciado sesion o si ha intentado iniciar sesion.
### HTML
Contenido HTML para las paginas del servidor web local usando strings:
- **Hindex()**: Pagina principal si el usuario ha iniciado sesion.
- **Hindexi()**: Pagina de login.
- **H404()**: Pagina de error 404.
- **CSS()**: Hoja de estilo CSS.