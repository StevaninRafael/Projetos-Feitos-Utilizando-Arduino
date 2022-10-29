#include <LiquidCrystal.h>
//Pinos que vão ser utilizados!.
LiquidCrystal lcd (32, 36, 42, 34, 40, 38);
byte carinha1[8] = {0b00000,
                    0b00000,
                    0b00000,
                    0b11111,
                    0b11111,
                    0b11111,
                    0b00000,
                    0b00000};
                   
byte carinha2[8] = {0b00000,
                    0b00000,
                    0b00000,
                    0b11111,
                    0b11110,
                    0b11111,
                    0b00000,
                    0b00000};
byte carinha3[8] = {0b00000,
                    0b00000,
                    0b00000,
                    0b00000,
                    0b00100,
                    0b00000,
                    0b00000,
                    0b00000};
byte carinha4[8] = {0b00000,
                    0b00000,
                    0b11111,
                    0b11111,
                    0b11111,
                    0b11111,
                    0b11111,
                    0b00000};
byte carinha5[8] = {0b00000,
                    0b00000,
                    0b11111,
                    0b11110,
                    0b11110,
                    0b11110,
                    0b11111,
                    0b00000};
byte carinha6[8] = {0b00000,
                    0b00000,
                    0b00000,
                    0b01110,
                    0b01110,
                    0b01110,
                    0b00000,
                    0b00000};
int RW = 48;



void setup() {
  pinMode(RW, OUTPUT);
  digitalWrite(RW, LOW);
  //Define o Numero de colunas e linha!.
  lcd.begin(8, 2);
    lcd.createChar(0, carinha1);
  lcd.createChar(1, carinha2);
  lcd.createChar(2, carinha3);
  lcd.createChar(3, carinha4);
  lcd.createChar(4, carinha5);
  lcd.createChar(5, carinha6);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.setCursor(1, 0);
  lcd.write(byte(1));
  lcd.setCursor(2, 0);
  lcd.write(byte(2));
  delay(700);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.setCursor(1, 0);
  lcd.write(byte(0));
  lcd.setCursor(2, 0);
  lcd.write(byte(1));
  delay(700);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(3));
  lcd.setCursor(1, 0);
  lcd.write(byte(3));
  lcd.setCursor(2, 0);
  lcd.write(byte(4));
  lcd.setCursor(6, 0);
  lcd.write(byte(5));
  delay(700);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(3));
  lcd.setCursor(1, 0);
  lcd.write(byte(3));
  lcd.setCursor(2, 0);
  lcd.write(byte(3));
  lcd.setCursor(3, 0);
  lcd.write(byte(4));
  lcd.setCursor(6, 0);
  lcd.write(byte(5));
  delay(700);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(3));
  lcd.setCursor(1, 0);
  lcd.write(byte(3));
  lcd.setCursor(2, 0);
  lcd.write(byte(3));
  lcd.setCursor(3, 0);
  lcd.write(byte(3));
  lcd.setCursor(4, 0);
  lcd.write(byte(4));
  lcd.setCursor(6, 0);
  lcd.write(byte(5));
  delay(700);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(3));
  lcd.setCursor(1, 0);
  lcd.write(byte(3));
  lcd.setCursor(2, 0);
  lcd.write(byte(3));
  lcd.setCursor(3, 0);
  lcd.write(byte(3));
  lcd.setCursor(4, 0);
  lcd.write(byte(3));
  lcd.setCursor(5, 0);
  lcd.write(byte(4));
  lcd.setCursor(6, 0);
  lcd.write(byte(5));
  delay(450);
}
