String x;
String myString[100];
int i,k;
 
void setup() 
{
  Serial.begin(9600);  
  pinMode(2, INPUT);    
}
 
void loop() {
  x = digitalRead(2);               
  myString[i] = x;
    i++;
    x = ""; 
    Serial.println("");
    for(k=0;k<i;k++)
    {
        Serial.print(myString[k]);
    }
    delay(3000);
  }
  
