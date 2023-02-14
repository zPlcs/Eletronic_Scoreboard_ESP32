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

#include <WiFi.h>
#include <HTTPClient.h>
#include "SevSeg.h"

#define botup1 35
#define botdown1 34

SevSeg sevseg;

int contadorTime1 = 0;
int contadorTime2 = 0;

int estadodobotup1;
int estadodobotdown1;

String tim1;
String tim2;

int contadorTimes = tim1.toInt() + tim2.toInt();


void bugloco(){
  estadodobotup1 = digitalRead(botup1);
   estadodobotdown1 = digitalRead(botdown1);
   if (estadodobotup1 != 1)
  {
   timeup1();

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
  timedown1();

    while(digitalRead(botdown1) != 1){
      delay(50);
    }

 if (contadorTimes == -1) {
      contadorTimes=0000;
    }
    
    sevseg.setNumber(contadorTimes, 1);
}  
sevseg.refreshDisplay();
}

void timeup1(){
    contadorTimes++; 
    Serial.print("Contador: ");
    Serial.println(contadorTimes);
}

//Função de debug para abaixar o valor do time 1 em 1.
void timedown1(){
    contadorTimes--; 
    Serial.print("Contador: ");
    Serial.println(contadorTimes);
}

const char* ssid = "Placar Eletrônico - G3";
const char* password = "plrnlmlp254";

//Your IP address or domain name with URL path
const char* serverNametim1 = "http://192.168.4.1/contadorTime1";
const char* serverNametim2 = "http://192.168.4.1/contadorTime2";



unsigned long previousMillis = 0;
const long interval = 1000; 

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) { 
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

byte numDigits = 4;
byte digitPins[] = {27, 14, 12, 13};
byte segmentPins[] = {15, 4, 5, 18, 19, 21, 22, 35};

bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_ANODE; // See README.md for options
  bool updateWithDelays = false; // Default 'false' is Recommended
  bool leadingZeros = true; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = true; // Use 'true' if your decimal point doesn't exist or isn't connected

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);

}

void loop() {

  unsigned long currentMillis = millis();
  
  if(currentMillis - previousMillis >= interval) {
     // Check WiFi connection status
    if(WiFi.status()== WL_CONNECTED ){ 
      tim1 = httpGETRequest(serverNametim1);
      tim2 = httpGETRequest(serverNametim2);
      Serial.println("tim1: " + tim1 + " tim2: " + tim2);
      Serial.println(tim1 + tim2);
      sevseg.setNumber(tim1.toInt() + tim2.toInt(), 1);
      previousMillis = currentMillis;
    }
    else {
      Serial.println("WiFi Disconnected");
      delay(2500);
    }
  }
  sevseg.refreshDisplay();
}

String httpGETRequest(const char* serverName) {
  WiFiClient client;
  HTTPClient http;
    
  // Your Domain name with URL path or IP address with path
  http.begin(client, serverName);
  
  // Send HTTP POST request
  int httpResponseCode = http.GET();
  
  String payload = "--"; 
  
  if (httpResponseCode>0) {
    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);
    payload = http.getString();
  }
  else {
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
  }
  // Free resources
  http.end();

  return payload;
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
