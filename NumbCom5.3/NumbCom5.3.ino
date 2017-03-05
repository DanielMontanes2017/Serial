/**********************************************************************************
**                                                                               **
**                                 NumberCom5.3                                  **
**                                                                               **
** Daniel Montañés Martínez                                           05/03/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
const int ledPin = 13;
long numEntrat, num;
int numXifres;

//********************************** Setup ****************************************
void setup() {
  Serial.begin(9600);
  Serial.println("Entra un numero? ");
}
//*********************************** Loop ****************************************
void loop() {
  while (Serial.available() > 0) {

    numEntrat = Serial.parseInt(); 
    num = numEntrat;
    numXifres = 0;
    
    if (Serial.read() == '\n') { 
      do{
        num = num / 10;
        numXifres++;
      }while (num != 0);
      Serial.print("El el numero ");
      Serial.print(numEntrat);
      Serial.print(" te ");
      Serial.print(numXifres);
      Serial.println(" xifres.");
      Serial.println("");
      Serial.println("Entra un numero? ");
    }
  }
}
//********************************* Funcions **************************************
