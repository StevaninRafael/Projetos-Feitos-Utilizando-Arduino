byte contagem = 0;
void setup() {
  //(INPUT) ENTRADA.
  //(OUTPUT) DE SAIDA.
  pinMode(50, INPUT);
  pinMode(52, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if (!digitalRead(52))
  {
    contagem++;
    delay(150);
    //(while) ENQUANTO for verdadeira.
    //(continue) tentar novamente.
    while (!digitalRead(52)) continue;
    delay(150);
  }
  if (!digitalRead(50))
  {
    //Adicionar + 1 no byte (i) ao apertar o botao.
    for (byte i = 0; i < contagem; i++)
    {
      digitalWrite(8, HIGH);
      delay(200);
      digitalWrite(8, LOW);
      delay(200);
    }
    //parar contagem.
    contagem = 0;
  }
}
