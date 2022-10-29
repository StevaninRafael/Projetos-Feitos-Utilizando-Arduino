unsigned long A;
unsigned long B;
unsigned long C;
unsigned long D;
unsigned long E;
void setup() {
  //Selecionar o LED.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //1 Loop
  //Acender LED.
  if(micros() - A > 300){
    A = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //2 Loop
  //Acender LED.
  if(micros() - A > 300){
    A = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //3 Loop
  //Acender LED.
  if(micros() - A > 300){
    A = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //
  if(micros() - C > 250){
  }
  //
  
  //4 Loop
  //Acender LED.
  if(micros() - B > 700){
    B = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //5 Loop
  //Acender LED.
  if(micros() - B > 700){
    B = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //6 Loop
  //Acender LED.
  if(micros() - B > 700){
    B = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //
  if(micros() - D > 100){
  }
  //
  
  //7 Loop
  if(micros() - A > 300){
    A = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //8 Loop
  //Acender LED.
  if(micros() - A > 300){
    A = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //9 Loop
  //Acender LED.
  if(micros() - A > 300){
    A = micros();
  digitalWrite(LED_BUILTIN,HIGH);
  //Desligar LED.
  digitalWrite(LED_BUILTIN,LOW);
  }
  
  //Fim.
  if(micros() - E > 2000){
  }
}
