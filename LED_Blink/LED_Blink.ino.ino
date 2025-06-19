void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0;i<=5;i++){
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
}
for (int j=0;j<=10;j++){
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(12,LOW);
delay(1000);
}
for (int k=0;k<=15;k++){
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(1000);
}
while(1);
}
