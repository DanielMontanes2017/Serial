/**********************************************************************************
**                                                                               **
**                                 Print 3.2                                     **
**                                                                               **
** Daniel Montañés Martínez                                           13/02/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
int thisByte = 33; 

//********************************** Setup ****************************************
void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); // types the ("") message
} 

//*********************************** Loop ****************************************
void loop()
{ 
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); // Shows the value from 1 to 126 in different 
  Serial.println(thisByte, BIN); // mathemathic values like Binary.

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character
  
} 

//********************************* Funcions **************************************
