byte col_li[7] = {36, 34, 32, 24, 26, 28, 30};
const char saida[12] = {'1','2','3','4','5','6','7','8','9','*','0','#'};
void setup()
{
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
void loop() 
{
  //Alternar entre as colunas.
  for (byte coluna = 0; coluna < 3; coluna++)
  {
    //Colunas em low.
    digitalWrite(col_li[coluna], LOW);
    //Alternar entre as linhas.
    for (byte linha = 3; linha < 7; linha++)
    {
      //Ler as linhas.
      if (!digitalRead(col_li[linha]))
      {
       //Vai contar ate 3 entre as colunas e fazer vezes 3. 
        Serial.println(saida[coluna + ((linha - 3) * 3)]);
        delay(200);
      }
    }
    //Colocar as colunas em HIGH novamente.
    digitalWrite(col_li[coluna], HIGH);
  }
}
