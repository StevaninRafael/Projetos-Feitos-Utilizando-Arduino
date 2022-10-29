
byte quantidade = 0;
char recebido[10];
void setup() {
Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    recebido[quantidade] = Serial.read();
    quantidade++;
    delay(2);
}
if (quantidade) {
String saida = recebido;
Serial.println("----------------------");
Serial.print("valor recebido: ");
Serial.println(saida);
Serial.print("Este Valor é ");
  Serial.print(map(saida.toInt(), 0, 5682, 0, 100));
  Serial.println("%");
  Serial.println("----------------------");
  quantidade = 0;
  delay(700);
}
}
