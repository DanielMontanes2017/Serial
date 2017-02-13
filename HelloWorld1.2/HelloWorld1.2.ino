/**********************************************************************************
**                                                                               **
**                               HelloWorld1.2                                   **
**                                                                               **
** Daniel Montañés Martínez                                           30/01/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************

//********************************** Setup ****************************************
void setup()  // it runs when you start up the sketch
{
  Serial.begin(9600);  // set up serial library at 9600 bps  
}


//*********************************** Loop ****************************************
void loop()  // run over and over                    
{
  Serial.print("Hello world!");  // prints Hello world! 
  delay(1000); // Wait 1000ms before it writes "Hello world!" again
}


//********************************* Funcions **************************************