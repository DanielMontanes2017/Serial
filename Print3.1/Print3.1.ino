/**********************************************************************************
**                                                                               **
**                                 Print3.1                                      **
**                                                                               **
** Daniel Montañés Martínez                                           13/02/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
int num = 64;

//********************************** Setup ****************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num); // It shows the default "int" value
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC); // It shows the Decimal value of "int"
  
  Serial.println(num,BIN); // It showst the Binary value of "int"
  
  Serial.println(num,HEX); // It shows the Hexadecimal value of "int"
  
  Serial.println(num,OCT); // It shows the Octagonal value of "int"
}

//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************
