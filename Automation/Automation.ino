#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "VXdgXNH3pnnRYvrI32dSj4K8BuOESAit";
char ssid[] = "PLUTO";
char pass[] = "9377620200";

void setup()

{
//pinMode(D0, OUTPUT);
//digitalWrite(D3, HIGH);

Serial.begin(9600);

Blynk.begin(auth, ssid, pass);

Blynk.syncAll();

}

void loop()

{

Blynk.run();

}
