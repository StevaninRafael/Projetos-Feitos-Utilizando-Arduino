void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor1 = (analogRead(A1));
  Serial.print("   Valor A1 =  ");
  Serial.print(valor1);
  int valor2 = (analogRead(A2));
  Serial.print("   Valor A2 =  ");
  Serial.println(valor2);
  delay(5000);
}
