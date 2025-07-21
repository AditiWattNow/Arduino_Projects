// C++ code
int buzzPin=8;
int d1=3;
int d2=2;
int d3=1;
int j;
void setup()
{
 pinMode(buzzPin,OUTPUT); 
}

void loop()
{
  for (j=1;j<=100;j++){
  digitalWrite(buzzPin,HIGH);
    delay(d1);
  digitalWrite(buzzPin,LOW);
    delay(d1);
  
  }
  for (j=1;j<=100;j++){
  digitalWrite(buzzPin,HIGH);
    delay(d2);
  digitalWrite(buzzPin,LOW);
    delay(d2);
  }
  for (j=1;j<=100;j++){
  digitalWrite(buzzPin,HIGH);
    delay(d3);
  digitalWrite(buzzPin,LOW);
    delay(d3);
  }
}