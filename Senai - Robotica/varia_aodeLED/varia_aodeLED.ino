void setup() {
  //LED azul
  pinMode(9, OUTPUT);
  //LED verde
  pinMode(10, OUTPUT);
  //LED vermelho
  pinMode(8, OUTPUT);
    analogWrite(8, 255);
    analogWrite(9, 255);
    analogWrite(10, 255);
}

void loop() {
  for(byte v = 255; v > 0; v--)
  {
    analogWrite(8, v);
    delayMicroseconds(3267);
  }
  for(byte e = 255; e > 0; e--)
  {
    analogWrite(10, e);
    delayMicroseconds(3267);
  }
  
  for(byte v = 0; v < 255; v++)
  {
    analogWrite(8, v);
    delayMicroseconds(3267);
  }
  for(byte a = 255; a > 0; a--)
  {
    analogWrite(9, a);
    delayMicroseconds(3267);
  }
  for(byte e = 0; e < 255; e++)
  {
    analogWrite(10, e);
    delayMicroseconds(3267);
  }
  for(byte v = 255; v > 0; v--)
  {
    analogWrite(8, v);
    delayMicroseconds(3267);
  }
  for(byte a = 0; a < 255; a++)
  {
    analogWrite(9, a);
    delayMicroseconds(3267);
  }
}
