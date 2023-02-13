/*
 * 
 * Criador: Patrik Luiz Conceição da Silva
 * Nick: zPlcs
 * Instituição: ETEC DOROTI (PIRITUBA)
 * Ano: 2022
 * Curso: Eletrônica
 * 
 * TCC - G3
 * Placar Eletrônico
 * 
 */

//Inclusão das bibliotecas
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include <DNSServer.h>
#include "SevSeg.h"
#include "SevSeg2.h"
#include "index_html.h"

//Botões de debug
#define botup1 35
#define botdown1 34

//Citamos os comandos de controle da biblioteca dos displays 7 segmentos
SevSeg sevseg;
SevSeg2 sevseg2;

//Criamos váriaveis que irão servir para fazer a matemática de valor de pontuação dos times. (Pontuação)
int contadorTime1 = 0;
int contadorTime2 = 0;

//Criamos váriaveis que irão servir para fazer a matemática de valor de segundos e minuto. (Cronômetro)
int cronometro_ss = 0;
int cronometro_mm = 0;

//Criamos váriaveis para o estado de debug dos displays.
int estadodobotup1;
int estadodobotdown1;

//Atribuimos as váriaveis dos times, para outra váriavel que irá contabilizar o valor total, e assim passar o dado certo para o display.
int contadorTimes = contadorTime1 + contadorTime2;

//Atribuimos as váriaveis do crônometro (minutos + segundos), para outra váriavel que irá contabilizar o valor total, e assim passar o dado certo para o display.
int cronometrofull = cronometro_ss + cronometro_mm;

//Definimos a porta de servidor do DNS, e o comando de controle da biblioteca
const byte DNS_PORT = 53;
DNSServer dnsServer;

//Função de debug para aumentar o valor do time 1 em 1.
void timeup1(){
    cronometrofull++; 
    Serial.print("Contador: ");
    Serial.println(contadorTimes);
}

//Função de debug para abaixar o valor do time 1 em 1.
void timedown1(){
    contadorTimes--; 
    Serial.print("Contador: ");
    Serial.println(contadorTimes);
}


void bugloco(){
  estadodobotup1 = digitalRead(botup1);
   estadodobotdown1 = digitalRead(botdown1);
   if (estadodobotup1 != 1)
  {
   //timeup1();

  while(digitalRead(botup1) != 1)  {
 delay(50);
  }
   
    if (contadorTimes == 99) {
      contadorTimes=0000;
    }

    sevseg.setNumber(contadorTimes, 1);
}  
sevseg.refreshDisplay();

if (estadodobotdown1 != 1) 
{
 // timedown1();

    while(digitalRead(botdown1) != 1){
      delay(50);
    }

 if (cronometrofull == -1) {
      cronometrofull = 0000;
    }
    
    sevseg2.setNumber2(cronometrofull, 1);
}
sevseg2.refreshDisplay2();
}

String tim1(){
  return String(contadorTime1);
}

String tim2(){
  return String(contadorTime2);
}

AsyncWebServer server(80);



const char* PARAM_INPUT = "value";

const char* softAP_ssid = "Placar Eletrônico - G3";
const char* softAP_password = "plrnlmlp254";

IPAddress apIP(192, 168, 4, 1);
IPAddress netMsk(255, 255, 255, 0);

String page1 = Inicial_page_html;
String page2 = volei_page_html;
String page3 = index_html;
String page4 = bask_page_html;
String logout = logout_html;


void setup(){
  // Serial port for debugging purposes
  Serial.begin(115200);
  Serial.println();

  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, netMsk);
  WiFi.softAP(softAP_ssid, softAP_password);
  IPAddress apIP = WiFi.softAPIP();
  Serial.print("Setting AP (Access Point)…");
  Serial.println(apIP);

dnsServer.start(DNS_PORT, "*", apIP);


   server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", page1);
  });
   server.on("/volei_page_html", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", page2);
  });
  server.on("/index_html", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", page3);
  });
  server.on("/bask_page_html", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", page4);
  });
  server.on("/logout_html", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", logout);
  });
  server.onNotFound([](AsyncWebServerRequest *request) {
    request->send(200, "text/html", page1);
  });

server.on("/contadorTime1", HTTP_GET, [] (AsyncWebServerRequest *request) {
    String inputMessage;
    // GET input1 value on <ESP_IP>/slider?value=<inputMessage>
    if (request->hasParam(PARAM_INPUT)) {
      inputMessage = request->getParam(PARAM_INPUT)->value();
      contadorTime1 = inputMessage.toInt();
    }
    else {
      inputMessage = "No message sent";
    }
     Serial.print("Contador: ");
    Serial.println(contadorTime1 + contadorTime2);
    sevseg.setNumber(contadorTime1 + contadorTime2);
    sevseg.setNumber(contadorTime1 + contadorTime2, 1);
      sevseg.refreshDisplay();
    request->send(200, "text/plain", tim1().c_str());
  });

server.on("/contadorTime2", HTTP_GET, [] (AsyncWebServerRequest *request) {
    String inputMessage;
    // GET input1 value on <ESP_IP>/slider?value=<inputMessage>
    if (request->hasParam(PARAM_INPUT)) {
      inputMessage = request->getParam(PARAM_INPUT)->value();
      contadorTime2 = inputMessage.toInt();
    }
    else {
      inputMessage = "No message sent";
    }
     Serial.print("Contador: ");
    Serial.println(contadorTime1 + contadorTime2);
    sevseg.setNumber(contadorTime1 + contadorTime2);
    sevseg.setNumber(contadorTime1 + contadorTime2, 1);
      sevseg.refreshDisplay();
    request->send(200, "text/plain", tim2().c_str());
  });

  server.on("/Cronometro_ss", HTTP_GET, [] (AsyncWebServerRequest *request) {
    String inputMessage;
    // GET input1 value on <ESP_IP>/slider?value=<inputMessage>
    if (request->hasParam(PARAM_INPUT)) {
      inputMessage = request->getParam(PARAM_INPUT)->value();
      cronometro_ss = inputMessage.toInt();
    }
    else {
      inputMessage = "No message sent";
    }
     Serial.print("Cronometro: ");
    Serial.println(cronometro_ss + cronometro_mm);
    sevseg2.setNumber2(cronometro_ss + cronometro_mm);
    sevseg2.setNumber2(cronometro_ss + cronometro_mm, 1);
      sevseg2.refreshDisplay2();
    request->send(200, "text/plain", "OK");
  });

  server.on("/Cronometro_mm", HTTP_GET, [] (AsyncWebServerRequest *request) {
    String inputMessage;
    // GET input1 value on <ESP_IP>/slider?value=<inputMessage>
    if (request->hasParam(PARAM_INPUT)) {
      inputMessage = request->getParam(PARAM_INPUT)->value();
      cronometro_mm = inputMessage.toInt();
    }
    else {
      inputMessage = "No message sent";
    }
     Serial.print("Cronometro: ");
    Serial.println(cronometro_ss + cronometro_mm);
    sevseg2.setNumber2(cronometro_ss + cronometro_mm);
    sevseg2.setNumber2(cronometro_ss + cronometro_mm, 1);
      sevseg2.refreshDisplay2();
    request->send(200, "text/plain", "OK");
  });

  server.begin();

pinMode(botup1, INPUT);
pinMode(botdown1, INPUT);

byte numDigits2 = 4;

byte digitPins2[] = {27, 23, 25, 26};

 byte segmentPins2[] = {17, 5, 18, 19, 21, 22, 4, 34};

  bool resistorsOnSegments2 = false; // 'false' means resistors are on digit pins
  byte hardwareConfig2 = COMMON_ANODE; // See README.md for options
  bool updateWithDelays2 = false; // Default 'false' is Recommended
  bool leadingZeros2 = true; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint2 = true; // Use 'true' if your decimal point doesn't exist or isn't connected

sevseg2.begin2(hardwareConfig2, numDigits2, digitPins2, segmentPins2, resistorsOnSegments2,
  updateWithDelays2, leadingZeros2, disableDecPoint2);
  sevseg2.setBrightness2(90);

}
 
void loop(){
  bugloco();
dnsServer.processNextRequest();
}

/*
 ___      ___ _______   ___       ___  __    ________  ________            
|\  \    /  /|\  ___ \ |\  \     |\  \|\  \ |\   __  \|\_____  \           
\ \  \  /  / | \   __/|\ \  \    \ \  \/  /|\ \  \|\  \\|___/  /|          
 \ \  \/  / / \ \  \_|/_\ \  \    \ \   ___  \ \  \\\  \   /  / /          
  \ \    / /   \ \  \_|\ \ \  \____\ \  \\ \  \ \  \\\  \ /  /_/__         
   \ \__/ /     \ \_______\ \_______\ \__\\ \__\ \_______\\________\       
    \|__|/       \|_______|\|_______|\|__| \|__|\|_______|\|_______|       
                                                                           
                                                                                                                                                 
                                                          

MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWWMMMMWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMWMWNX0OxdookXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWNKkdl:;:ldkKNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMN0dlc:;:d0NWWMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMWWKdcll;;o0WWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMWXxcllc;;xXWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMWXd:coc;;xNWMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMWXd;cl:;;xNWWMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMNk;:lc;,cKWWMMMMMMMMMMMMMWWWWWWWWWWNWWNNNNNNNNNWWWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMKc,cc:;,dNWMMWMMMMMMMMMMWWWWWWWNNWWNNNX0OOOO0KKXXNNWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMWx,,:;,,,xWWMMMMMMMMMWWWWWWWWWWWNNNK0kxxxddkxodxxxkO0KNNNWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMWo.,,,'''dNMMMMWMMMWWWWWWWNNWNXXXKOkdclcdkddkolkkddollokXWNNWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMNl.','''.cXWWWWWWWWWWWWWNNX0kkO0koxk:,;;cdxkkdoxkkkxdllodkOXWWNWWWWWWMMMMMMMMMMWWMMMMMMMMMMMM
MMMMMMMNl..''...,kWWWWWWWWWWWWWWKdllldkooKO,.,cdO00kolld000Kkxdodox0NNNNWWWWMMMMWNK0KXWWWMMMMMMMMMMM
MMMMMMMWx...'....cXWWWWWWWWWWWWXd:::;:lcxX0xk00Oxl:;,;;oOOKK0Okdoc:o0NNWWWWWWWWKo:,,;oKWWMMMMMMMMMMM
MMMMMMMM0;........oNWNNWWNNNNNNOlcc;.':lkOk00xool;';cccoddolcc;;;;coOXWWWWWWWWNo''';kXWWMMMMMMMMMMMM
MMMMMMMMNl.........o0O0NWNNNWNKkc,,,''':coxo:,;lc;;;,'......,;;:cldolxKNWWWWWWNd''.;0WWWMMMMMMMMMMMM
MMMMMMMWW0;........'odxKWNNK0Odl;.......,::,'.''..........;dOO000KK0kdokNWWWWWWKl...cKWWWMMMMMMMMMMM
MMMMMMMMWWk'.......;dddkOkOkoc,'....',;c:;cllllcc,'........;dO000KXXX0ocxXWWWWWWKc...;OWWMMMMMMMMMMM
MMMMMMMMWWNd.......:oddodOxc'..'..',;:lcclccddddocc:'....'..,o000KXKXXkccdKNNNNWW0,...'dNMMMMMMMMMMM
MMMMMMMMWWWXo......:lllxKx;..''..';;:c:cooocldooollc;......',cO00KXXNKdclc:d0XNWNk,.....oNMMMMMMMMMM
MMMMMMMMWWWWNx'....;ccd0Oc'''....';;:lll::lllllccccc;....,;:ld00KXNKOdccc,...,:c:'....'.'kWMMMMMMMMM
MMMMMMMMMWWWWNO;..':;ck0x;.''''..';;;c::::cllcccc:c:;..',;;cx0KKX0xl:,... ........''',...oWMMMMMMMMM
MMMMMMMMMWWWWWWKl';:;cO0Odc,......',',cc;::c:::::::;..',,:oO0Okdc:;::;,,,;,.  ..........'kWMMMMMMMMM
MMMMMMMMMMMWWWWWKo;;;,ldoool,......':xkc;;;;;;;;;;;;;:ldxxlc:,',cdkOOkkxc;;;;;;,........oNWMWMMMMMMM
MMMMMMMMMMMWWWWWWXkc,',;::cc;.....,okkc',,,,,:dxxkkkkxxoc;'..':dO0KKOdollxkko:,...  ..;kNWWWMMMMMMMM
MMMMMMMMMMMMWWWWWWNKkl,';:cc,....,ldxd;..'.';lxkxolc;,'.....,:odkkkdolx0Oxolc:ccc;,,;oXWWWWWMMMMMMMM
MMMMMMMMMMMMMWWWWWNWWX0dc;;:,....,lodd:....;odoc;,'..''..'.,:lool:;lxkxdoodO0Okdlc:;cONWWWWWMMMMMMMM
MMMMMMMMMMMMMMWWWWWWWWWWKl,;,....':cclc;,.'ldc;''',,''..,,',:clc;;ldl::lddol:,.... ;0WWWWWWWMMMMMMMM
MMMMMMMMMMMMMMMWWWWWWNNWNKl;,.,:'.',;;;:;';oc,,',,;:coddl:;,,;:;';lc:cl:'...........oXWWWWWMMMMMMMMM
MMMMMMMMMMMMMMMMWWWWWWNNNWXd;'c0x'.',,,,''::,,;cdO0XNNNXKkdoocccc:,',:'..............xWWWWMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMWWWWWWWWNk:lKNk:,,,;l:,,,,cxXNXK0xdol::;;;,,,,'...................xWWMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMWWWWWWNWNK0NWNX0O0KN0:',c0XOdlc:;::;;;;,,,,,'''''.....'..''.....:KWWMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWNWWNNWNWNd,;O0o:;:::cllllc:;,'''',,,,,,,,,,''''...'oKWWWMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWNNWXooXkldkOO0XXNNNXK0Okdol:;,'''''.....';cxKNMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMWWMWWWWWWWWWWWWWWNXNNNWWWWWWWWWMMMWMMMMWNXK0OkkxxxxkOKNWWWMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM




*/
