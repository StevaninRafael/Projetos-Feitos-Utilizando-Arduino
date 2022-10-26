void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  if (digitalRead(52) == LOW)
  {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);

    delay(100);

    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);

    delay(100);

    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);

    delay(100);

    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
  }


  if (digitalRead(50) == LOW)
  {
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);

    delay(100);

    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);

    delay(100);

    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);

    delay(100);

    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
  }
}
