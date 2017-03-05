/**********************************************************************************
**                                                                               **
**                                 CharCom6.1                                    **
**                                                                               **
** Daniel Montañés Martínez                                           05/03/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
char thisByte;
char thatByte = 33;

//********************************** Setup ****************************************
void setup() { 
  Serial.begin(9600); 
  Serial.println("Prem una tecla..."); 
} 
//*********************************** Loop ****************************************
void loop() { 

  while (Serial.available() > 0) {

    thisByte = thatByte; 
    thatByte = Serial.read(); 

    if (thatByte == '\n') {
      
      Serial.write(thisByte);    
    
      Serial.print(", dec: "); 
      Serial.print(thisByte);      
    
      Serial.print(", hex: "); 
      Serial.print(thisByte, HEX);     
    
      Serial.print(", oct: "); 
      Serial.print(thisByte, OCT);     
    
      Serial.print(", bin: "); 
      Serial.println(thisByte, BIN);   
 
    }
  }  
} 

//********************************* Funcions **************************************
