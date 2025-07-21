// C++ code
int tiltPin=7;
int tiltVal;
int redPin=8;
int greenPin=9;
void setup()
{
 pinMode(tiltPin,INPUT);
 digitalWrite(tiltPin,HIGH);
 Serial.begin(9600);
 pinMode(redPin,OUTPUT);
 pinMode(greenPin,OUTPUT);
}

void loop()
{
tiltVal = digitalRead(tiltPin);
Serial.println(tiltVal);
  if(tiltVal==1){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  }
  else {
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  }
}