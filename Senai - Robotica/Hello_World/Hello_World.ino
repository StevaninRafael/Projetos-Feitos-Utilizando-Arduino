#include <LiquidCrystal.h>
//Pinos que vão ser utilizados!.
LiquidCrystal lcd (32, 36, 42, 34, 40, 38);
byte carinha[8] = {0b00000,
                   0b01010,
                   0b01010,
                   0b00000,
                   0b10101,
                   0b10001,
                   0b11111,
                   0b00000};
byte seta[8] = {0b00100,
                0b01110,
                0b11111,
                0b00100,
                0b00100,
                0b11111,
                0b01110,
                0b00100};
int RW = 48;



void setup() {
  pinMode(RW, OUTPUT);
  digitalWrite(RW, LOW);
  //Define o Numero de colunas e linha!.
  lcd.begin(8, 2);
    lcd.createChar(0, carinha);
  lcd.createChar(1, seta);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  //Envia o Texto para o LCD.
  lcd.print("Hello ");
  //carinha.
  lcd.write(byte(0));


  lcd.setCursor(0, 1);
  lcd.print("World ");
  //seta dupla.
  lcd.write(byte(1));
  delay(450);
  //Desliga o Display LCD.
  lcd.noDisplay();
  delay(450);
  //Liga o Display LCD.
  lcd.display();
}
