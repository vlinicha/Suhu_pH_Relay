#include <DFRobot_PH.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 7 // Pin data dari sensor suhu
#define RELAY_1 2 // Pin untuk mengontrol relay 1
#define RELAY_2 3 // Pin untuk mengontrol relay 2
int pHpin = A0;    // Sensor pH dihubungkan ke pin analog A0
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  sensors.begin();
  Serial.begin(9600);
}

void loop() {
  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);

  Serial.print("Suhu: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  if (temperatureC > 30.0) {
    digitalWrite(RELAY_1, LOW); // Relay ON
  } else {
    digitalWrite(RELAY_1, HIGH); // Relay OFF
  }

  delay(1000);

   int pHValue = analogRead(pHpin);
  float pH = (5.0 * pHValue / 1024.0) * 3.5; // Mengonversi nilai analog ke pH
  Serial.println("pH Value: " + String(pH));

  // Misalkan Anda ingin menghidupkan relay jika pH di atas 7.0
  if (pH > 11.0) {
    digitalWrite(RELAY_2, LOW); // Hidupkan relay
  } else {
    digitalWrite(RELAY_2, HIGH);  // Matikan relay
  }

  delay(1000); // Tunda selama 1 detik sebelum membaca ulang pH
}
