// CH_PD & VIN --> battery +3.7v VCC | GND --> metal ball tilt switch --> battery -3.7v GROUND |
// Mount on the outer side of your mail box door.
// Notify your postal carrier to avoid a potential misunderstanding.
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "300d08bbff5c48eb885ac66c6c0daff4"; // Replace with your Auth Token from the Blynk app (Nut icon).
void setup() {
Blynk.begin(auth, "extend", "Raretacocookiesalmonflash15"); // Replace with your WiFi network name and password.
while (Blynk.connect() == false) { }
Blynk.notify("Mailbox opened!"); // You can customize this note with whatever message you want for other uses.
ESP.deepSleep(0); }
void loop() { yield(); } 
