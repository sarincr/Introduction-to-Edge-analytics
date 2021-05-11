int sensorVal = 0;
int x[200];
byte i = 0;
void setup() 
{
  Serial.begin(9600);
   while (i < 20) 
  {
    sensorVal = analogRead(A0); 
    x[i] = sensorVal;  
    i++; 
  }
  i=0;
  Serial.print("[");
   while (i < 20) 
  {
   Serial.print(x[i]);
   Serial.print(", ");
   i++; 
  }
  Serial.print("]");
}

void loop() 
{
}
