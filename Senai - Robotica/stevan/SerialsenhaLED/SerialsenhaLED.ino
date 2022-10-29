char recebendo[6];
byte pos = 0;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  while (Serial.available()) {
    recebendo[pos] = Serial.read();
    pos++;
    if (pos > 4) {
      String frase = recebendo;
      if (frase.substring(0, 5) == "SENAI") {
        digitalWrite(LED_BUILTIN, HIGH);
      }
      else
        digitalWrite(LED_BUILTIN, LOW);
      pos = 0;
      Serial.println(frase);
    }
    delay(50);
  }
  if (pos > 0) {
    pos = 0;
    String frase = recebendo;
    Serial.println(frase);
  }
}
