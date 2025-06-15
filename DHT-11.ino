//BHB

#include <DHT.h>
#define DHTPIN 2         // DHT11 data pin connected to digital pin 2
#define DHTTYPE DHT11    

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Sensor Reading Started...");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // default is Celsius

  // Check if any reads failed and exit early
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C  |  Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(2000); // Wait 2 seconds before next reading
}
