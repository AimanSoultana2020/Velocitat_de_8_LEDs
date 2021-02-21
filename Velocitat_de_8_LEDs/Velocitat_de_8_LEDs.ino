/**********************************************************************************
**                                                                               **
**                             Velocitat de 8 LEDs                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
const int led8 = 22;         // donar nom al pin 22 de l’Arduino
const int led9 = 23;         // donar nom al pin 23 de l’Arduino
const int led10 = 24;        // donar nom al pin 24 de l’Arduino
const int led11 = 25;        // donar nom al pin 25 de l’Arduino
const int led12 = 26;        // donar nom al pin 26 de l’Arduino
const int led13 = 27;        // donar nom al pin 27 de l’Arduino
const int led14 = 28;        // donar nom al pin 28 de l’Arduino
const int led15 = 29;        // donar nom al pin 29 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino

int velocitat = 20;          // velocitat de l'acció en ms
int valPot0;                 // guardar valor del poyenciometre

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(led8, OUTPUT);     // definir el pin 22 com una sortida
  pinMode(led9, OUTPUT);     // definir el pin 23 com una sortida
  pinMode(led10, OUTPUT);    // definir el pin 24 com una sortida
  pinMode(led11, OUTPUT);    // definir el pin 25 com una sortida
  pinMode(led12, OUTPUT);    // definir el pin 26 com una sortida
  pinMode(led13, OUTPUT);    // definir el pin 27 com una sortida
  pinMode(led14, OUTPUT);    // definir el pin 28 com una sortida
  pinMode(led15, OUTPUT);    // definir el pin 29 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  velocitat = valPot0;          // actualitzar velocitat amb el valor del potenciòmetre
                                // es queden leds velocitat ms en aquest estat (Linea 1)
  digitalWrite(led0, HIGH);     // posar a 5V el pin 5
  digitalWrite(led1, HIGH);     // posar a 5V el pin 6
  digitalWrite(led2, LOW);      // posar a 0V el pin 7
  digitalWrite(led3, LOW);      // posar a 0V el pin 8
  digitalWrite(led4, LOW);      // posar a 0V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, LOW);      // posar a 0V el pin 11
  digitalWrite(led7, LOW);      // posar a 0V el pin 12
  digitalWrite(led8, LOW);      // posar a 0V el pin 22
  digitalWrite(led9, HIGH);     // posar a 5V el pin 23
  digitalWrite(led10, HIGH);    // posar a 5V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, HIGH);    // posar a 5V el pin 26
  digitalWrite(led13, HIGH);    // posar a 5V el pin 27
  digitalWrite(led14, LOW);     // posar a 0V el pin 28
  digitalWrite(led15, LOW);     // posar a 0V el pin 29
  
  delay(velocitat);             // es queden leds velocitat ms en aquest estat (Linea 2)
  
  digitalWrite(led0, LOW);      // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 5V el pin 6
  digitalWrite(led2, HIGH);     // posar a 5V el pin 7
  digitalWrite(led3, LOW);      // posar a 0V el pin 8
  digitalWrite(led4, LOW);      // posar a 0V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, LOW);      // posar a 0V el pin 11
  digitalWrite(led7, LOW);      // posar a 0V el pin 12
  digitalWrite(led8, HIGH);     // posar a 5V el pin 22
  digitalWrite(led9, HIGH);     // posar a 5V el pin 23
  digitalWrite(led10, LOW);     // posar a 0V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, LOW);     // posar a 0V el pin 26
  digitalWrite(led13, HIGH);    // posar a 5V el pin 27
  digitalWrite(led14, HIGH);    // posar a 5V el pin 28
  digitalWrite(led15, LOW);     // posar a 0V el pin 29
  
  delay(velocitat);             // es queden leds vrlocitat ms en aquest estat (Linea 3)

  digitalWrite(led0, LOW);      // posar a 0V el pin 5
  digitalWrite(led1, LOW);      // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 5V el pin 7
  digitalWrite(led3, HIGH);     // posar a 5V el pin 8
  digitalWrite(led4, LOW);      // posar a 0V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, LOW);      // posar a 0V el pin 11
  digitalWrite(led7, HIGH);     // posar a 5V el pin 12
  digitalWrite(led8, HIGH);     // posar a 5V el pin 22
  digitalWrite(led9, LOW);      // posar a 0V el pin 23
  digitalWrite(led10, LOW);     // posar a 0V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, LOW);     // posar a 0V el pin 26
  digitalWrite(led13, LOW);     // posar a 0V el pin 27
  digitalWrite(led14, HIGH);    // posar a 5V el pin 28
  digitalWrite(led15, HIGH);    // posar a 5V el pin 29

  delay(velocitat);             // es queden leds vrlocitat ms en aquest estat (Linea 4)

  digitalWrite(led0, LOW);      // posar a 0V el pin 5
  digitalWrite(led1, LOW);      // posar a 0V el pin 6
  digitalWrite(led2, LOW);      // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 5V el pin 8
  digitalWrite(led4, HIGH);     // posar a 5V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 5V el pin 11
  digitalWrite(led7, HIGH);     // posar a 5V el pin 12
  digitalWrite(led8, LOW);      // posar a 0V el pin 22
  digitalWrite(led9, LOW);      // posar a 0V el pin 23
  digitalWrite(led10, LOW);     // posar a 0V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, LOW);     // posar a 0V el pin 26
  digitalWrite(led13, LOW);     // posar a 0V el pin 27
  digitalWrite(led14, LOW);     // posar a 0V el pin 28
  digitalWrite(led15, HIGH);    // posar a 5V el pin 29

  delay(velocitat);             // es queden leds vrlocitat ms en aquest estat (Linea 5)

  digitalWrite(led0, LOW);      // posar a 0V el pin 5
  digitalWrite(led1, LOW);      // posar a 0V el pin 6
  digitalWrite(led2, LOW);      // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 5V el pin 8
  digitalWrite(led4, HIGH);     // posar a 5V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, HIGH);     // posar a 5V el pin 11
  digitalWrite(led7, HIGH);     // posar a 5V el pin 12
  digitalWrite(led8, LOW);      // posar a 0V el pin 22
  digitalWrite(led9, LOW);      // posar a 0V el pin 23
  digitalWrite(led10, LOW);     // posar a 0V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, LOW);     // posar a 0V el pin 26
  digitalWrite(led13, LOW);     // posar a 0V el pin 27
  digitalWrite(led14, LOW);     // posar a 0V el pin 28
  digitalWrite(led15, HIGH);    // posar a 5V el pin 29
  
  delay(velocitat);             // es queden leds vrlocitat ms en aquest estat (Linea 6)

  digitalWrite(led0, LOW);      // posar a 0V el pin 5
  digitalWrite(led1, LOW);      // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 5V el pin 7
  digitalWrite(led3, HIGH);     // posar a 5V el pin 8
  digitalWrite(led4, LOW);      // posar a 0V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, LOW);      // posar a 0V el pin 11
  digitalWrite(led7, HIGH);     // posar a 5V el pin 12
  digitalWrite(led8, HIGH);     // posar a 5V el pin 22
  digitalWrite(led9, LOW);      // posar a 0V el pin 23
  digitalWrite(led10, LOW);     // posar a 0V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, LOW);     // posar a 0V el pin 26
  digitalWrite(led13, LOW);     // posar a 0V el pin 27
  digitalWrite(led14, HIGH);    // posar a 5V el pin 28
  digitalWrite(led15, HIGH);    // posar a 5V el pin 29

  delay(velocitat);             // es queden leds vrlocitat ms en aquest estat (Linea 7)

  digitalWrite(led0, LOW);      // posar a 0V el pin 5
  digitalWrite(led1, HIGH);     // posar a 5V el pin 6
  digitalWrite(led2, HIGH);     // posar a 5V el pin 7
  digitalWrite(led3, LOW);      // posar a 0V el pin 8
  digitalWrite(led4, LOW);      // posar a 0V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, LOW);      // posar a 0V el pin 11
  digitalWrite(led7, LOW);      // posar a 0V el pin 12
  digitalWrite(led8, HIGH);     // posar a 5V el pin 22
  digitalWrite(led9, HIGH);     // posar a 5V el pin 23
  digitalWrite(led10, LOW);     // posar a 0V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, LOW);     // posar a 0V el pin 26
  digitalWrite(led13, HIGH);    // posar a 5V el pin 27
  digitalWrite(led14, HIGH);    // posar a 5V el pin 28
  digitalWrite(led15, LOW);     // posar a 0V el pin 29

  delay(velocitat);             // es queden leds vrlocitat ms en aquest estat (Linea 8)

  digitalWrite(led0, HIGH);     // posar a 5V el pin 5
  digitalWrite(led1, HIGH);     // posar a 5V el pin 6
  digitalWrite(led2, LOW);      // posar a 0V el pin 7
  digitalWrite(led3, LOW);      // posar a 0V el pin 8
  digitalWrite(led4, LOW);      // posar a 0V el pin 9
  digitalWrite(led5, LOW);      // posar a 0V el pin 10
  digitalWrite(led6, LOW);      // posar a 0V el pin 11
  digitalWrite(led7, LOW);      // posar a 0V el pin 12
  digitalWrite(led8, LOW);      // posar a 0V el pin 22
  digitalWrite(led9, HIGH);     // posar a 5V el pin 23
  digitalWrite(led10, HIGH);    // posar a 5V el pin 24
  digitalWrite(led11, LOW);     // posar a 0V el pin 25
  digitalWrite(led12, HIGH);    // posar a 5V el pin 26
  digitalWrite(led13, HIGH);    // posar a 5V el pin 27
  digitalWrite(led14, LOW);     // posar a 0V el pin 28
  digitalWrite(led15, LOW);     // posar a 0V el pin 29
}

//********** Funcions *************************************************************
