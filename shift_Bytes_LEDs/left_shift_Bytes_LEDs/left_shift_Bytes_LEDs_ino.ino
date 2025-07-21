 int latchPin=11;
 int clockPin=9;
 int dataPin=12;
 

 
 byte myByte=0b00000001;




void setup() {
Serial.begin(9600);
pinMode (latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
digitalWrite(latchPin,LOW);
shiftOut (dataPin,clockPin,LSBFIRST,myByte);
digitalWrite(latchPin,HIGH);
Serial.println(myByte,BIN);
myByte=myByte*2+myByte/128;
delay(1000);

}
