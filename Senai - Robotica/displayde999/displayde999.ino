const byte pinos[11] = {38,40,42,44,46,7,5,6,52,50,48};
#define segA 38
#define segB 40
#define segC 42
#define segD 44
#define segE 46
#define segF 7
#define segG 5
int contagem, abacate;
void setup() {
  for (byte i = 0; i < 11; i++){
    pinMode(pinos[i], OUTPUT);
    digitalWrite(pinos[i], HIGH);
  }
}

void tratar_display(byte coluna, byte numero) {
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  
  if (coluna == 0){
    digitalWrite(48, LOW);
  }
  else if (coluna == 1){
    digitalWrite(50, LOW);
  }
  else if (coluna == 2){
    digitalWrite(52, LOW);
  }
  switch (numero){
  case 0:
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  break;
  case 1:
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  break;
  case 2:
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segG,LOW);
  break;
  delay(200);
  case 3:
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segG,LOW);
  break;
  case 4:
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segF, LOW);
  break;
  case 5:
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segD, LOW);
  break;
  delay(200);
  case 6:
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  break;
  case 7:
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segC, LOW);
  break;
  case 8:
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segF, LOW);
  break;
  case 9:
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segF, LOW);
  break;
  }
  delay(5);
  digitalWrite(52,HIGH);
  digitalWrite(50,HIGH);
  digitalWrite(48,HIGH);
}
void loop() {
  byte centena;
  byte dezena;
  byte unidade;
  abacate++;
  if (abacate > 9){
    abacate = 0;
    contagem++;
  if (contagem > 999) contagem = 0;
  }
  dezena = contagem/10;
  while (dezena > 9) dezena -= 10;
  centena = contagem/100;
  unidade = contagem;
  while (unidade > 9) unidade -= 10;  

  tratar_display (2, centena);
  tratar_display (1, dezena);
  tratar_display (0, unidade);
}
