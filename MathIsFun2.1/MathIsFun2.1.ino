/**********************************************************************************
**                                                                               **
**                                 MathIsFun                                     **
**                                                                               **
** Daniel Montañés Martínez                                           06/02/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
int a = 5;  // "int" is used to storage a number value
int b = 10;
int c = 20; 

//********************************** Setup ****************************************
void setup()              
{
  Serial.begin(9600);    

  Serial.println("Here is some math: ");

  Serial.print("a = "); /* "a = " means that "a" valor is equal to the one given 
                        in the variables */
  Serial.println(a);    
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // add
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiply
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);

  Serial.print("c % b = ");       // module
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);
}

//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************
