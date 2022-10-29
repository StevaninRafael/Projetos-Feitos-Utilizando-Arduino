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
  //coluna 1
  digitalWrite(36, LOW);
   if (digitalRead(24) == LOW)
   {
   Serial.println('1');
   delay(1000); 
   }
  digitalWrite(36, HIGH);
  digitalWrite(36, LOW);
   if (digitalRead(26) == LOW)
   {
   Serial.println('4');
   delay(1000);  
   }
  digitalWrite(36, HIGH);
  digitalWrite(36, LOW);
   if (digitalRead(28) == LOW)
   {
   Serial.println('7');
   delay(1000);  
   }
   digitalWrite(36, HIGH);
   digitalWrite(36, LOW);
   if (digitalRead(30) == LOW)
   {
   Serial.println('*');
   delay(1000); 
   }
   digitalWrite(36, HIGH); 
   //fim da coluna1
   
   //coluna 2
  digitalWrite(34, LOW);
   if (digitalRead(24) == LOW)
   {
   Serial.println('2');
   delay(1000); 
   }
  digitalWrite(34, HIGH);
  digitalWrite(34, LOW);
   if (digitalRead(26) == LOW)
   {
   Serial.println('5');
   delay(1000);  
   }
  digitalWrite(34, HIGH);
  digitalWrite(34, LOW);
   if (digitalRead(28) == LOW)
   {
   Serial.println('8');
   delay(1000);  
   }
   digitalWrite(34, HIGH);
   digitalWrite(34, LOW);
   if (digitalRead(30) == LOW)
   {
   Serial.println('0');
   delay(1000); 
   }
   digitalWrite(34, HIGH); 
   //fim da coluna2
   //coluna 3
  digitalWrite(32, LOW);
   if (digitalRead(24) == LOW)
   {
   Serial.println('3');
   delay(1000); 
   }
  digitalWrite(32, HIGH);
  digitalWrite(32, LOW);
   if (digitalRead(26) == LOW)
   {
   Serial.println('6');
   delay(1000);  
   }
  digitalWrite(32, HIGH);
  digitalWrite(32, LOW);
   if (digitalRead(28) == LOW)
   {
   Serial.println('9');
   delay(1000);  
   }
   digitalWrite(32, HIGH);
   digitalWrite(32, LOW);
   if (digitalRead(30) == LOW)
   {
   Serial.println('#');
   delay(1000); 
   }
   digitalWrite(32, HIGH); 
   //fim da coluna3
}
