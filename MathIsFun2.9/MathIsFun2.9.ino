/**********************************************************************************
**                                                                               **
**                                 MathIsFun2.9                                  **
**                                                                               **
** Daniel Montañés Martínez                                           06/02/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
int a = 3;
int b = 2;
int d;

//********************************** Setup ****************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b; // It makes a division, but it can't be a decimal number
 
  Serial.print("a / b = ");
  Serial.println(d);

}

//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************



