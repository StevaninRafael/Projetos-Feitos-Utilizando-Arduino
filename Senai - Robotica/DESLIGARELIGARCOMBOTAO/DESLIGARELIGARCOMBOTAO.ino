void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  if (digitalRead(52) == LOW)
  {
    digitalWrite(8 , HIGH);
    digitalWrite(9 , HIGH);
    digitalWrite(10 , HIGH);
    digitalWrite(11 , HIGH);
  }
  if (digitalRead(50)== LOW)
  {
    digitalWrite(8 ,LOW);
    digitalWrite(9 ,LOW);
    digitalWrite(10 ,LOW);
    digitalWrite(11 ,LOW);
  }
}
