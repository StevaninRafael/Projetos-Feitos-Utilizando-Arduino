void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(A0);
  Serial.print("Valor = ");
  Serial.print(valor);
  Serial.print("   equivale a ");
  Serial.println((valor*0.048828125)-9);
  delay(500);
}
