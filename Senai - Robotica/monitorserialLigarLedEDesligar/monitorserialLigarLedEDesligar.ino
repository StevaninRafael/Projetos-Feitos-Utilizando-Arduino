void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  //Serial.availabre usado para procurar dentro do (arduino) o que voce esta procurando.
  if (Serial.available()) {
    char recebendo = Serial.read();
    switch (recebendo)
    {
      //digitar '1,2,3,4' no monitor serial para ligar os LEDS.
      case '1':
        if (digitalRead(8) == LOW) {
          digitalWrite(8, HIGH);
        }
        else {
          digitalWrite(8, LOW);
        }
        break;
      case '2':
        if (digitalRead(9) == LOW) {
          digitalWrite(9, HIGH);
        }
        else {
          digitalWrite(9, LOW);
        }
        break;
      case '3':
        if (digitalRead(10) == LOW) {
          digitalWrite(10, HIGH);
        }
        else {
          digitalWrite(10, LOW);
        }
        break;
      case '4':
        if (digitalRead(11) == LOW) {
          digitalWrite(11, HIGH);
        }
        else {
          digitalWrite(11, LOW);
        }
        break;

      //digitar 'D' no monitor serial para desligar os LEDS em ordem.
      case 'D':
        digitalWrite(8, LOW);
        delay(200);
        digitalWrite(9, LOW);
        delay(200);
        digitalWrite(10, LOW);
        delay(200);
        digitalWrite(11, LOW);
        break;

      //Testar LEDS.
      case 'L':
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        delay(700);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        break;
    }

  }

}
