unsigned long espera;
void setup() {
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);
}

void loop() {
if(micros() - espera > 500){
  espera = micros();
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
}
Serial.println(micros());
}
