/**********************************************************************************
**                                                                               **
**                                 HelloWorld1.4                                 **
**                                                                               **
** Daniel Montañés Martínez                                           30/01/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************

//********************************** Setup ****************************************
void setup()         
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Esculli el numero de l'operacio que vols realitzar"); /* prints
  the "x" message in the console and makes an "ENTTER"*/
  Serial.println("1. Comprovar el numero de la tarjeta de credit"); /* prints
  the "x" message in the console and makes an "ENTTER"*/
  Serial.println("2. Comprovar el numero de compte bancari"); /* prints
  the "x" message in the console and makes an "ENTTER"*/
  Serial.println("3. Buscar un digit perdut de la targeta de credit"); /* prints
  the "x" message in the console and makes an "ENTTER"*/
}

//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************

