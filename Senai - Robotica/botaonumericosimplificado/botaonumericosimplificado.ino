byte colunas[3] = {36, 34, 32};
byte linha[4] = {24, 26, 28, 30};
void setup() {
Serial.begin(9600);
//Saidas
pinMode(36, OUTPUT);
pinMode(34, OUTPUT);
pinMode(32, OUTPUT);
//Entradas
pinMode(24, INPUT_PULLUP);
pinMode(26, INPUT_PULLUP);
pinMode(28, INPUT_PULLUP);
pinMode(30, INPUT_PULLUP);
//Saidas Ligadas
digitalWrite(36, HIGH);
digitalWrite(34, HIGH);
digitalWrite(32, HIGH);
}
void loop() {
  if(byte i = 3; i <= colunas; i--)
  {
    Serial.println();
}
}
