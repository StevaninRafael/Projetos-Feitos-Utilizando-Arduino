void setup() {
Serial.begin(9600);
}

void loop() {
for(int cont = 0; cont < 5683; cont++){
  Serial.print("Valor = ");
  Serial.print(cont);
  Serial.print(" equivale ");
  Serial.print(map(cont, 0, 5682, 0, 100));
  Serial.println("%");
  delay(1);
}
}
