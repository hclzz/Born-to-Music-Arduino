# Musical Chord Control with LEDs

## Requirements

- **Hardware:**
  - ESP32
  - WS2812 LEDs (or similar)
  - 330Ω resistor (for data pin protection)
  - Power supply appropriate for the number of LEDs

- **Libraries:**
  - [FastLED](https://github.com/FastLED/FastLED): For controlling the LEDs.
  - [WiFi](https://www.arduino.cc/en/Reference/WiFi): For WiFi network functionality.
  - [WebServer](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WebServer): To create the web server that receives commands.

## Setup

1. **Wi-Fi Setup:**
   - The ESP32 will be configured as a Wi-Fi access point (AP) with the SSID "Born to Music" and password "Btf@2024". After initialization, you can connect to the access point to send commands to the ESP32 via HTTP.

2. **Chord Commands:**
   - The Web server will receive HTTP POST commands at the URL `/enviar-mensagem` with two parameters:
     - `tipo`: Type of command (e.g., "Chord" or "Slider")
     - `acorde`: Name of the chord or slider value.
   
   The ESP32 will trigger the corresponding LED sequence for the sent chord. Example available chords:
   - "E Minor"
   - "E Major"
   - "A Minor"
   - "C Major"
   - "G Major"
   - "D Major"
   - "D Minor"
   - "E Major with Seventh"
   - "D Major with Seventh"
   - "A with Seventh"
   - "C with Seventh"

3. **Brightness Control:**
   - The LED animation can be controlled by a slider, which adjusts the animation's brightness.

## Main Functions

- `acender(int brilho)`: Turns on the LEDs with a specific brightness.
- `apagar()`: Turns off all LEDs.
- Chord functions like `MiMenor()`, `MiMaior()`, `LaMenor()`, and others control the LEDs corresponding to each musical chord.
- Each chord has an LED animation that mimics the brightness of the strings on a guitar or acoustic guitar.

## How to Use

1. Upload the code to the ESP32 using the Arduino IDE.
2. Connect to the Wi-Fi access point "Born to Music" with the provided password.
3. Send a POST command to the ESP32 via any HTTP client or directly from a browser with the `tipo` and `acorde` parameters as described above.
4. The ESP32 will execute the LED animation corresponding to the chosen chord.

Example of a command for the "E Minor" chord:
```
POST http://192.168.1.1/enviar-mensagem
Body:
  tipo=Acorde&acorde=Mi Menor
```
