/*

  Googly Eyes using two MAX7219 Matrix Modules and an Arduino Nano
  
    Name    Arduino       MAX7219 7 Segment display module
    -----   -------       --------------------------------
    +5V     5V            VCC
    GND     GND           GND
    DIN     D11/MOSI      DIN
    CS      D7            CS
    CLK     D13/SCK       CLK
    
*/

#include <SPI.h>
#include "Googly_Font.h"

int RandDelay;
int Action;

#include "MAX7219_Functions.h"
#include "Eye_Actions.h"

void setup() {
  Serial.begin(115200);
  Serial.println("Up and Clackin");

  MAX7219_Setup();

  delay(100);

} // end of setup



void loop() {

  Action = random(1, 17);               // random action from x, y
  RandDelay = random(200, 2000);        // random delay from x, y

  Serial.println(Action);

  Eye_action();                         // display the action

  delay(RandDelay);

} // end of loop


