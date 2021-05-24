void setup()
{
  float x[100], y[100];
  int i=0;
  float SX=0, SXSq=0, SY=0, SXY=0, slope, Intercept, Xnew;
  Serial.begin(115200);
  for (int i = 0; i < 100; i++)
  {
    y[i] = analogRead(A3);
    x[i]= i;
    delay(10);
  }
  Serial.println("\n Array");
  Serial.println();
  Serial.print( "i =  \t  x= " );
  Serial.print("\t");
  for (int i = 0; i < 100; i++)
  {
    Serial.println();
    Serial.print(x[i]);
    Serial.print(" ");
    Serial.print(y[i]);
    Serial.println("\t");
  }
  Serial.println("Finding the sigma......");
  for(i=1;i<100;i++)
  {
    SX = SX + x[i];
    SXSq = SXSq + x[i]*x[i];
    SXY = SXY + x[i]*y[i];
    SY = SY + y[i];
  }
  Serial.print("Sum of X = ");
  Serial.println(SX);
  Serial.print("Sum of X*X = ");
  Serial.println(SXSq);
  Serial.print("Sum of X*Y = ");
  Serial.println(SXY);
  Serial.print("Sum of Y = ");
  Serial.println(SY);
  Serial.println("Slope  = ((n* sum(x*y) ) - (sum(x*y))/ ((n*sum(x*x) ) - (sum(x*x))) ");
  slope= (100*SXY-SX*SY)/(100*SXSq-SX*SX);
  Serial.print(" Slope = ");
  Serial.println(slope);
  Serial.println(" Finding the  Intercept......");
  Serial.println( "Intercept  = (sum(Y) - slope*sum(X)) / length of array; ");
  Intercept = (SY - slope*SX)/100;
  Serial.print(" Intercept = ");
  Serial.println(Intercept);
  Serial.println("Next predicted values is =");
  Xnew = analogRead(A3); 
  Serial.println(slope*Xnew + Intercept);
}

void loop()
{
  
}
