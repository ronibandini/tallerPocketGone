// Pocket Gone Setup
// V1.0 21-1-2025
// GPL License
// Tras subir el firmware a la placa, ver el MAC en redes WiFi Ejemplo(PocketGone:AB:12:34:56:78)

#include <WiFi.h>
#include <WiFiAP.h>
#include <esp_wifi.h>
#include <WebServer.h>
#include <ESP2SOTA.h>

WebServer server(80);

void setup(void) {
  Serial.begin(115200);
  
  WiFi.mode(WIFI_STA);
  WiFi.STA.begin();
  String myMac=WiFi.macAddress();
  Serial.println(myMac);
  WiFi.STA.end();
  
  WiFi.mode(WIFI_AP);  
  WiFi.softAP("PocketGone:"+String(myMac), "");
   
  delay(1000);
  IPAddress IP = IPAddress (10, 10, 10, 1);
  IPAddress NMask = IPAddress (255, 255, 255, 0);
  WiFi.softAPConfig(IP, IP, NMask);
  IPAddress myIP = WiFi.softAPIP();

  server.on("/index.html", HTTP_GET, []() {
    server.sendHeader("Connection", "close");
    server.send(200, "text/plain", "Si ya enviaste el MAC y descargaste el firmware .bin para tu placa, podés subirlo desde http://10.10.10.1/update");
  });

  ESP2SOTA.begin(&server);
  server.begin();
}

void loop(void) {  
  server.handleClient();
  delay(5);
}