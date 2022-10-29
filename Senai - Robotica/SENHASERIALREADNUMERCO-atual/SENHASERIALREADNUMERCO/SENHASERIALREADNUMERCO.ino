byte col_li[7] = {36, 34, 32, 24, 26, 28, 30};
const char saida[12] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '*', '0', '#'};
char digitado[9];
byte pos = 0;


void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  /* ------------------------------------------------------ */
  for (byte i = 0; i < 7; i++)
  {
    //Definir as colunas como saida e deixar as colunas ligadas.
    if (i < 3) {
      pinMode(col_li[i], OUTPUT);
      digitalWrite(36, HIGH);
    }
    //Definir as linhas como entrada.
    else pinMode(col_li[i], INPUT_PULLUP);
  }
  Serial.begin(9600);
}
/* ------------------------------------------------------ */
//Alternar entre as colunas.
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
        return saida[coluna + ((linha - 3) * 3)];
      }
    }
    //Colocar as colunas em HIGH novamente.
    digitalWrite(col_li[coluna], HIGH);
  }
  return 0;
}
void loop()
{
  char leitura = ler_teclado();
  if (leitura > 0) {
    digitado[pos] = leitura;
    pos++;
    Serial.println(String(digitado));
  }
  //senha 876543219
  for (byte i = 0; i < 9; i++)
  {
    pos[i];
  {
    if (digitado[0] = '8' && digitado[1] = '7' && digitado[2] = '6'
     && digitado[3] = '5' && digitado[4] = '4' && digitado[5] = '3'
     && digitado[6] = '2' && digitado[7] = '1' && digitado[8] = '9')
    {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
    }
    else {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
    }
  }
  pos = 0;
}
}
