/**********************************************************************************
**                                                                               **
**                                 MathIsFun2.6                                  **
**                                                                               **
** Daniel Montañés Martínez                                           06/02/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************
int drive_gb = 100;
long drive_mb;

//********************************** Setup ****************************************
void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************

