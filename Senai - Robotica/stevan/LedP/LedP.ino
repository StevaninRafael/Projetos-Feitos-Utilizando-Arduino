void setup() {
     pinMode(LED_BUILTIN, OUTPUT);
     Serial.begin(9600);
}
void alternar(byte pino){
     byte estado = digitalRead(pino);
     estado = !estado;
     digitalWrite(pino,estado);
     if (digitalRead(pino))
         Serial.println("LED LIGADO");
     else
         Serial.println("LED DESLIGADO");
         return estado;
}

byte sorvete(long valor){
  return valor%2;
}

void loop() {
  Serial.println(sorvete(767676));
  delay(500);
     /*alternar(LED_BUILTIN);
     delay(500);
     */
}
