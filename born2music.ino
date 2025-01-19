#include <FastLED.h>
#include <WiFi.h>
#include <WebServer.h>

#define NUM_LEDS 66
#define DATA_PIN 26

CRGB leds[NUM_LEDS];

const char *ssid = "Born to Music";
const char *password = "Btf@2024";
IPAddress local_IP(192, 168, 1, 1);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);
WebServer server(80);

void acender(int brilho) {
  int waveDelay = 50; // Ajuste conforme necessário para controlar a velocidade da onda
  // Percorre a animação da onda
  for (int i = 0; i < NUM_LEDS; i++) { // Define a cor do LED atual com o brilho especificado
    leds[i] = CHSV(map(i, 0, NUM_LEDS - 1, 0, 255), 255, brilho);
    FastLED.show();
    delay(waveDelay); // Ajuste conforme necessário para a velocidade da animação
  }
  fill_solid(leds, NUM_LEDS, CRGB::Black);  // Apaga todos os LEDs no final da animação
  FastLED.show();
}

void apagar() {
  fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));
  FastLED.show();
}

void MiMenor(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 0; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 0; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[13] = CRGB(0,25,0);
    leds[29] = CRGB(0,0,25);
    FastLED.show();
  }
}

void MiMaior(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 0; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 0; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[13] = CRGB(0,25,0);
    leds[29] = CRGB(0,0,25);
    leds[34] = CRGB(25,0,0);
    FastLED.show();
  }
}

void LaMenor(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 2; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 2; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[30] = CRGB(0,25,0);
    leds[36] = CRGB(0,0,25);
    leds[53] = CRGB(25,0,0);
    FastLED.show();
  }
}

void DoMaior(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 0; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 0; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[29] = CRGB(0,25,0); //vermelho
    leds[15] = CRGB(0,0,25); //Azul
    leds[53] = CRGB(25,0,0); // Verde
    FastLED.show();
  }
}

void LaMaior(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 1; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 1; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[30] = CRGB(25,0,0); 
    leds[35] = CRGB(0,25,0); 
    leds[51] = CRGB(0,0,25);
    FastLED.show();
  }
}

void SolMaior(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 0; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 0; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[6] = CRGB(0,25,0); //vermelho
    leds[14] = CRGB(25,0,0); //Azul
    leds[60] = CRGB(0,0,25); // Verde
    FastLED.show();
  }
}

void ReMaior(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 2; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 2; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[36] = CRGB(0,25,0); //vermelho
    leds[57] = CRGB(25,0,0); //Azul
    leds[50] = CRGB(0,0,25); // Verde
    FastLED.show();
  }
}

void ReMenor(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 2; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 2; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[36] = CRGB(0,25,0); //vermelho
    leds[50] = CRGB(0,0,25); //Azul
    leds[56] = CRGB(25,0,0); // Verde
    FastLED.show();
  }
}

void MiMaiorComSetima(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 0; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 0; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[34] = CRGB(25,0,0); //vermelho
    leds[13] = CRGB(0,25,0); //Azul
    FastLED.show();
  }
}

void ReMaiorComSetima(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 2; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 2; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[53] = CRGB(25,0,0); //vermelho
    leds[35] = CRGB(0,25,0); //Azul
    leds[58] = CRGB(0,0,25); // Verde
    FastLED.show();
  }
}

void LaComSetima(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 1; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 1; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[52] = CRGB(25,0,0); //vermelho
    leds[29] = CRGB(0,25,0); //Azul
    FastLED.show();
  }
}

void DoComSetima(){
  int cordas[] = {0, 21, 22, 43, 44, 65}; // Lista de cordas
  CRGB corCordas = CRGB(5, 5, 5); // Cor das cordas
  apagar();
  for (int i = 0; i < 6; i++) {   // Acende todos os LEDs inicialmente
    leds[cordas[i]] = corCordas;
  }
  FastLED.show();
  for (int i = 0; i < 6; i++) {  // Faz cada LED brilhar mais forte um de cada vez
    // Define a cor e o brilho máximo para o LED da vez
    leds[cordas[i]] = CRGB(50, 50, 50);
    FastLED.show();
    delay(120); // Mantém o LED mais brilhante por 1 segundo
    leds[cordas[i]] = corCordas; // Restaura o brilho original
    leds[53] = CRGB(25,0,0); //vermelho
    leds[29] = CRGB(0,25,0); //Azul
    leds[15] = CRGB(0,0,25); // Verde
    leds[38] = CRGB(25,25,0); // Verde
    FastLED.show();
  }
}

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  Serial.begin(115200);
  Serial.flush();
  Serial.println("Início do Setup");
  acender(100);


  WiFi.softAPConfig(local_IP, gateway, subnet);
  if (!WiFi.softAP(ssid, password)) {
    Serial.println("Erro ao configurar ponto de acesso WiFi!");
  } else {
    Serial.println("Conectado ao WiFi como ponto de acesso");
    Serial.print("Endereço IP do ESP32: ");
    Serial.println(WiFi.softAPIP());
  }


  server.on("/enviar-mensagem", HTTP_POST, []() {
    String tipo = server.arg("tipo");
    String acorde = server.arg("acorde");
    Serial.print("Mensagem recebida - Tipo: ");
    Serial.print(tipo);
    Serial.print(", Acorde: ");
    Serial.println(acorde);


    if (tipo == "Acorde") {
      if (acorde == "Mi Menor") {
        Serial.println("Ação relacionada ao acorde Mi Menor");
        MiMenor();
      } else if (acorde == "Mi Maior") {
        Serial.println("Ação relacionada ao acorde Mi Maior");
        MiMaior();
      } else if (acorde == "La Menor") {
        Serial.println("Ação relacionada ao acorde lá Menor");
        LaMenor();
      } else if (acorde == "Do Maior") {
        Serial.println("Ação relacionada ao acorde Do Maior");
        DoMaior();
      } else if (acorde == "La Maior") {
        Serial.println("Ação relacionada ao acorde lá maior");
        LaMaior();
      } else if (acorde == "Sol Maior") {
        Serial.println("Ação relacionada ao acorde Sol Maior");
        SolMaior();
      } else if (acorde == "Ré Maior") {
        Serial.println("Ação relacionada ao acorde Ré Maior");
        ReMaior();
      } else if (acorde == "Ré Menor") {
        Serial.println("Ação relacionada ao acorde Ré Menor");
        ReMenor();
      } else if (acorde == "Mi Maior com Sétima") {
        Serial.println("Ação relacionada ao acorde mi maior com sétima");
        MiMaiorComSetima();
      } else if (acorde == "Ré Maior com Sétima") {
        Serial.println("Ação relacionada ao acorde Ré Maior com sétima");
        ReMaiorComSetima();
      } else if (acorde == "La com Sétima") {
        Serial.println("Ação relacionada ao acorde lá com sétima");
        LaComSetima();
      } else if (acorde == "Do com Sétima") {
        Serial.println("Ação relacionada ao acorde Dó com sétima");
        DoComSetima();
      } else {
        Serial.println("Ação padrão para outros acordes");
      }
    } else if (tipo == "Slider") {
      int valorSlider = acorde.toInt();
      Serial.print("Valor do Slider: ");
      Serial.println(valorSlider);
      // Adapte esta lógica conforme necessário para ação específica do Slider
    } else {
      Serial.println("Ação padrão para outros tipos de mensagens");
    }


    server.send(200, "text/plain", "Mensagem recebida com sucesso");
  });


  server.begin();  // Iniciar servidor
}


void loop() {
  server.handleClient();
}

