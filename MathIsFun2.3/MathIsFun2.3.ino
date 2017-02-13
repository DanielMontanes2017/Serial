/**********************************************************************************
**                                                                               **
**                                 MathIsFun2.3                                  **
**                                                                               **
** Daniel Montañés Martínez                                           06/02/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************

int drive_gb = 5;
int drive_mb;

//********************************** Setup ****************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); 
  Serial.print(drive_gb); // Types that your HD is 5GB large in storage
  Serial.println(" GB large."); 

  drive_mb = 1024 * drive_gb; // it multiplies 1024 * 5

  Serial.print("It can store ");
  Serial.print(drive_mb); // it shows you the 1024 * 5 multiplication
  Serial.println(" Megabytes!");
}

//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************
