void setup() {
  //tp2 temp 300
  //tp3 ganho 300
//randomSeed(analogRead(A3));
pinMode(26, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
}

float tempRead(){
  int leitura = analogRead(A0);
  float temperatura = leitura;
  temperatura *= 0.48875853;
  Serial.println(temperatura);
  return temperatura;
  delay(300);
}

void loop() {
//Serial.println(random(0,9));
//delay(150);
//leitura /= 8.954;
digitalWrite(26, HIGH);
while(tempRead() < 45){
}
digitalWrite(26, LOW);
analogWrite(8, 255);
while(tempRead() > 40){
}
while(tempRead() > 35){
  analogWrite(8,(tempRead()-35)*51);
}
analogWrite(8, 0);
}
