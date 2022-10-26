byte col[3] = {48,50,52};
byte pos = 0;
void setup() {
  pinMode(50, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(48, OUTPUT);
pinMode(38, OUTPUT);
pinMode(40, OUTPUT);
pinMode(42, OUTPUT);
pinMode(44, OUTPUT);
pinMode(46, OUTPUT);
pinMode(7, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
for (byte i = 0; i < 3; i++){
  digitalWrite(col[i], LOW);
}
digitalWrite(38, HIGH);
digitalWrite(40, HIGH);
digitalWrite(42, HIGH);
digitalWrite(44, HIGH);
digitalWrite(46, HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
//1.
digitalWrite(6,LOW);
digitalWrite(40, LOW);
digitalWrite(42, LOW);
delay(500);
digitalWrite(40, HIGH);
digitalWrite(42, HIGH);
//2.
digitalWrite(38, LOW);
digitalWrite(40, LOW);
digitalWrite(44, LOW);
digitalWrite(5, LOW);
digitalWrite(46, LOW);
delay(500);
digitalWrite(38, HIGH);
digitalWrite(40, HIGH);
digitalWrite(44, HIGH);
digitalWrite(5, HIGH);
digitalWrite(46, HIGH);
//3.
digitalWrite(38, LOW);
digitalWrite(40, LOW);
digitalWrite(42, LOW);
digitalWrite(44, LOW);
digitalWrite(5, LOW);
delay(500);
digitalWrite(38, HIGH);
digitalWrite(40, HIGH);
digitalWrite(42, HIGH);
digitalWrite(44, HIGH);
digitalWrite(5, HIGH);
//4.
digitalWrite(40, LOW);
digitalWrite(42, LOW);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
delay(500);
digitalWrite(40, HIGH);
digitalWrite(42, HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
//5.
digitalWrite(38, LOW);
digitalWrite(42, LOW);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
digitalWrite(44, LOW);
delay(500);
digitalWrite(38, HIGH);
digitalWrite(42, HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
digitalWrite(44, HIGH);
//6.
digitalWrite(38, LOW);
digitalWrite(42, LOW);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
digitalWrite(44, LOW);
digitalWrite(46, LOW);
delay(500);
digitalWrite(38, HIGH);
digitalWrite(42, HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
digitalWrite(44, HIGH);
digitalWrite(46, HIGH);
//7.
digitalWrite(40, LOW);
digitalWrite(38, LOW);
digitalWrite(42, LOW);
delay(500);
digitalWrite(40, HIGH);
digitalWrite(38, HIGH);
digitalWrite(42, HIGH);
//8.
digitalWrite(38, LOW);
digitalWrite(40, LOW);
digitalWrite(42, LOW);
digitalWrite(44, LOW);
digitalWrite(46, LOW);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
delay(500);
digitalWrite(38, HIGH);
digitalWrite(40, HIGH);
digitalWrite(42, HIGH);
digitalWrite(44, HIGH);
digitalWrite(46, HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
//9.
digitalWrite(38, LOW);
digitalWrite(40, LOW);
digitalWrite(42, LOW);
digitalWrite(44, LOW);
digitalWrite(5, LOW);
digitalWrite(7, LOW);
delay(500);
digitalWrite(38, HIGH);
digitalWrite(40, HIGH);
digitalWrite(42, HIGH);
digitalWrite(44, HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
//0 INF
digitalWrite(38, HIGH);
delay(500);
digitalWrite(38, LOW);
digitalWrite(40, HIGH);
delay(500);
digitalWrite(40, LOW);
digitalWrite(42, HIGH);
delay(500);
digitalWrite(42, LOW);
digitalWrite(44, HIGH);
delay(500);
digitalWrite(44, LOW);
digitalWrite(46, HIGH);
delay(500);
digitalWrite(46, LOW);
digitalWrite(7, HIGH);
delay(500);
digitalWrite(7, LOW);

delay(1500);
}
