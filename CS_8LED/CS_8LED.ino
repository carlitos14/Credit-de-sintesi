/*******************************************************************************
**                                                                            **
**                           TITOL: COMPROVADOR DE CABLES                     **
**                                                                            **
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 04/05/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
 
//***********************************SETUP**************************************
void setup()                
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
 
}
//************************************LOOP**************************************

void loop()                     
{
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);

  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);

  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(1000);

  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(1000);

  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(1000);

  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(1000);

  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(1000);
}

//**********************************FUNCIONS************************************
