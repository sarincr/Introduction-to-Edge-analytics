#include <LinearRegression.h>


LinearRegression lr;

float values[2];

void setup() 
{

    Serial.begin(115200);
    
}

void loop() {

    Serial.println("Learning Data...");
    lr.Data(0.4);
    lr.Data(0.7);
    lr.Data(0.8);
    lr.Data(1);
    lr.Data(1.2);
    lr.Data(1.3);
    lr.Data(1.5);
    lr.Data(2);
    lr.Data(2.1);
    lr.Data(2.2);


	Serial.print(lr.Samples()); Serial.println(" Point Linear Regression Calculation...");
    Serial.print("Correlation: "); Serial.println(lr.Correlation());
    Serial.print("Values: "); lr.Parameters(values); Serial.print("Y = "); Serial.print(values[0],4); Serial.print("*X + "); Serial.println(values[1],4);
    Serial.print("Values: "); lr.Parameters(values); Serial.print(" a = "); Serial.print(values[0],4); Serial.print(" b = "); Serial.println(values[1],4); Serial.println("");

    lr.Reset();
    
    delay(5000);
    
}
