// C++ code
int lightPin=A0;
int lightVal;
int d1=250;
int redPin=13;
int greenPin=12;
void setup()
{
  pinMode(lightPin,INPUT);
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop()
{
 lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  if (lightVal<=30){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  }
  if (lightVal>=700){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  }
}