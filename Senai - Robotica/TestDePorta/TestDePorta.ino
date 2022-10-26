void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(8 , HIGH);
  digitalWrite(9 , HIGH);
  digitalWrite(10 , HIGH);
  digitalWrite(11 , HIGH);
  
  if(digitalRead(52)== LOW)
  
  {
      digitalWrite(8 , LOW);
      digitalWrite(9 , LOW);
      digitalWrite(10 , LOW);
      digitalWrite(11 , LOW);

      delay(500);
      
  PORTB = B00100000;
  delay(100);
  PORTB = PORTB >>1;
  delay(100);
  PORTB = PORTB >>1;
  delay(100);
  PORTB = PORTB >>1;
  
  PORTH = B01000000;
  delay(100);
  PORTH = PORTH >>1;
  delay(100);
  PORTH = PORTH >>1;
  delay(100);
  PORTH = PORTH >>1;

  delay(1000);
  }

}
