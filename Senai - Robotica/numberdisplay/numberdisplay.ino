//Colunas Do Teclado Numerico!.
byte col_li[7] = { 36, 34, 32, 24, 26, 28, 30 };
//Teclado Numero (Shield).
const byte saida[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, '*', 0, '#' };
//Numeros Digitados.
char digitado[3];
//Variação De Posição.
byte pos = 0;
//Pinos De Entrada De Baixa T.
const byte pinos[11] = { 38, 40, 42, 44, 46, 7, 5, 6, 52, 50, 48 };
//DisplayNumbers
byte centena, dezena, unidade;
//Definição Mais Simples Dos Pinos.
#define segA 38
#define segB 40
#define segC 42
#define segD 44
#define segE 46
#define segF 7
#define segG 5
#define segDP 6
//-----------------------------------------------------------//
void setup() {
  //Troca Dos Pinos.
  for (byte i = 0; i < 11; i++) {
    pinMode(pinos[i], OUTPUT);
    digitalWrite(pinos[i], HIGH);
  }
  //Pinos Dos LEDs.
  pinMode(11, OUTPUT);  //AZUL.
  pinMode(12, OUTPUT);  //VERDE.
  pinMode(13, OUTPUT);  //VERMELHO.
//-----------------------------------------------------------//
  for (byte i = 0; i < 7; i++) {
    //Definir as colunas como saida e deixar as colunas ligadas.
    if (i < 3) {
      pinMode(col_li[i], OUTPUT);
      digitalWrite(36, HIGH);
    }
    //Definir as linhas como entrada.
    else
      pinMode(col_li[i], INPUT_PULLUP);
  }
  Serial.begin(9600);
}
//-----------------------------------------------------------//
char ler_teclado() {
  for (byte coluna = 0; coluna < 3; coluna++) {
    //Colunas em low.
    digitalWrite(col_li[coluna], LOW);
    //Alternar entre as linhas.
    for (byte linha = 3; linha < 7; linha++) {
      //Ler as linhas.
      if (!digitalRead(col_li[linha])) {
        //Vai contar ate 3 entre as colunas e fazer vezes 3.
        digitalWrite(11, HIGH);
        Serial.println(saida[coluna + ((linha - 3) * 3)]);
        digitalWrite(11, LOW);
        delay(200);
        digitalWrite(col_li[coluna], HIGH);
        return saida[coluna + ((linha - 3) * 3)];
      }
    }
    //Colocar as colunas em HIGH novamente.
    digitalWrite(col_li[coluna], HIGH);
  }
  return 0;
}
//-----------------------------------------------------------//
void tratar_display(byte coluna, byte numero) {
  // Deixar todos os LEDs do Display desligados.
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, HIGH);

  // Função para Trocar as Colunas.
  if (coluna == 0) {
    digitalWrite(48, LOW);
  } else if (coluna == 1) {
    digitalWrite(50, LOW);
  } else if (coluna == 2) {
    digitalWrite(52, LOW);
  }

  switch (numero) {       
    //Numeração Nos LEDs Do Display.
    case 0:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      break;
    case 1:
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      break;
    case 2:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segG, LOW);
      break;
      delay(200);
    case 3:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segG, LOW);
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
  digitalWrite(52, HIGH);
  digitalWrite(50, HIGH);
  digitalWrite(48, HIGH);
}
//-----------------------------------------------------------//
void loop() {

  //Função Para Reconhecer o que for digitado no teclado/Shield do arduino e passar a informação para os LEDs.
  byte leitura = ler_teclado();
  if (leitura) {
    centena = dezena;
    dezena = unidade;
    unidade = leitura;
  }
  //Ordem de cade display.
  tratar_display(2, centena);
  tratar_display(1, dezena);
  tratar_display(0, unidade);

  //Senha 683.
  if (unidade = '6' && dezena = '8' && centena = '3') {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(13, HIGH);
  }
}
//-----------------------------------------------------------//