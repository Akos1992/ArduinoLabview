void setup() {
  // Soros kommunikáció bekapcsolása a számítógéppel
  Serial.begin(9600);
}

void loop() {
  // Olvassuk be az analóg 1-es tüskéről érkező feszültséget
  int sensorValue = analogRead(A1);

  // Átalakítjuk a feszültséget volt értékké
  float voltage = sensorValue * (5.0 / 1023.0);

  // Kiírjuk a feszültséget a soros monitorra
  Serial.print("Bemenő feszültség: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);  // Kis késleltetés az olvasások között
}