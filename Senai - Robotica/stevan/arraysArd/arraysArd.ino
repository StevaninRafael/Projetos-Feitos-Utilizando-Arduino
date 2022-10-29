char texto[5] = {'s','e','n','a','i',};
void setup() {
  Serial.begin(9600);
}

void loop() {
  /*delay(1000);
  for(byte i = 0; i < 5; i++){
     Serial.print(texto[i]);
     delay(500);
  }
  */
  String frase = texto;
  Serial.println (frase);
  delay(700);
}
