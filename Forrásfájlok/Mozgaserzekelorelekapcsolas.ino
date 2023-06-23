const int relayPin = 2; // A relé digitális kimenetének pinje
const float thresholdVoltage = 3.0; // Feszültség küszöbértéke

void setup() {
  pinMode(relayPin, OUTPUT); // A relé kimeneti pinjét beállítjuk kimenetre
  Serial.begin(9600); // Soros kommunikáció bekapcsolása a számítógéppel
}

void loop() {
  int sensorValue = analogRead(A1); // Olvassuk be az analóg 1-es tüskéről érkező feszültséget
  float voltage = sensorValue * (5.0 / 1023.0); // Átalakítjuk a feszültséget volt értékké

  Serial.print("Bemenő feszültség: ");
  Serial.print(voltage);
  Serial.println(" V");

  if (voltage > thresholdVoltage) {
    digitalWrite(relayPin, HIGH); // Bekapcsoljuk a relét, ha a feszültség nagyobb, mint a küszöbérték
  } else {
    digitalWrite(relayPin, LOW); // Kikapcsoljuk a relét, ha a feszültség kisebb vagy egyenlő a küszöbértékkel
  }

  delay(1000);  // Kis késleltetés az olvasások között
}