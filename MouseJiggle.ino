/*
 *  Name:      MouseJiggle.ino
 *  Purpose:   To send mouse move commands  
 *  By:        Michael Vieau
 *  Date:      09.17.2018
 *  Modified:  09.17.2018
 *  Rev Level  0.1
 */
 

#include <Mouse.h>

void setup()
{
  Mouse.begin();
}
void loop()
{
  Mouse.move(5,0,0);
  delay(1);
  Mouse.move(-5,0,0);
  delay(10000);
}
