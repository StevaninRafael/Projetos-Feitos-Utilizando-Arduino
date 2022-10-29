byte const LEDs[3] = {10,8,9};
byte rampa = 0;
byte maca = 0;
void setup() {
     for(byte i = 0; i < 3; i++){
         pinMode(LEDs[i], 255);
         analogWrite(LEDs[i], 255);
     }
     analogWrite(LEDs[1], 0);
}

void loop() {
    for(byte i = 0; i < 255; i++){
      if (!rampa) analogWrite(LEDs[maca],~i);
      else analogWrite(LEDs[maca],i);
      delayMicroseconds(3267);
    }
    maca++;
    if (maca > 2) maca = 0;
    rampa = !rampa;
    }
