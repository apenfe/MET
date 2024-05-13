
#include "DHT.h"
 
// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)
//----------------
#include <OneWire.h>
#include <DallasTemperature.h>
 
const int oneWirePin = 7;
 
OneWire oneWireBus(oneWirePin);
DallasTemperature sensor(&oneWireBus);
 
// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor
 
const int DHTPin = 6;     // what digital pin we're connected to
 int pin4=2;
DHT dht(DHTPin, DHTTYPE);
 
void setup() {
   Serial.begin(9600);
   sensor.begin(); 
   Serial.println("DHTxx test!");
 
   dht.begin();
  digitalWrite(2, HIGH);
}
 
void loop() {
   // Wait a few seconds between measurements.
   digitalWrite(2, HIGH);
   delay(2000);
    Serial.println("Leyendo temperaturas: ");
   sensor.requestTemperatures();
 
   Serial.print("Temperatura en sensor 0: ");
   Serial.print(sensor.getTempCByIndex(0));
   Serial.println(" ºC");
 
   // Reading temperature or humidity takes about 250 milliseconds!
   float h = dht.readHumidity();
   float t = dht.readTemperature();
 
   if (isnan(h) || isnan(t)) {
      Serial.println("Failed to read from DHT sensor!");
      return;
   }
 
 
   Serial.print("Humidity: ");
   Serial.print(h);
   Serial.print(" %\t");
   Serial.print("Temperature: ");
   Serial.print(t);
   Serial.print(" *C ");
}
