/**********************************************************************************
**                                                                               **
**                               HelloWorld1.3                                   **
**                                                                               **
** Daniel Montañés Martínez                                           30/01/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************

//********************************** Setup ****************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

//*********************************** Loop ****************************************
void loop()                 // run over and over again
{
  Serial.println("Hello world!");  // After typing "Hello World!" makes an "Enter"
  delay(1000);
}

//********************************* Funcions **************************************