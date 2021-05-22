//
//    FILE: array.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.00
//    DATE: 2015-10-18
//
// PUPROSE: example complex array
//

#include "Complex.h"

Complex z[100];

void setup()
{
  Serial.begin(115200);
  for (int i = 0; i < 100; i++)
  {
    float x = analogRead(A3);
    z[i].set(i,x);
    delay(100);
  }
  Serial.println("\n Array");
  Serial.println();
  Serial.print( "i =  \t  x= " );
  Serial.print("\t");
  for (int i = 0; i < 100; i++)
  {
    Serial.println();
    Serial.print(z[i]);
    Serial.print("\t");
  }
 
}

void loop()
{
}
