// C++ code
int myPin=A2;
int readVal;
float V2;
int wait=250;
int redPin=8;
int greenPin=13;
int yellowPin=12;




void setup(){
  pinMode(myPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  
Serial.begin(9600);
  
}




void loop()
{
readVal= analogRead(myPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  if (V2<3.0){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,LOW);
  }
  if (V2>=3 && V2<=4.0){
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
  
  }
  if (V2>4){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,LOW);
  }
      delay(wait);
}