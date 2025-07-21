 int latchPin=11;
 int clockPin=9;
 int dataPin=12;

 
 byte LED1s=0b10101010;
 byte LED2s=0b01010101;



void setup() {
Serial.begin(9600);
pinMode (latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}

void loop() {
digitalWrite(latchPin,LOW);
shiftOut (dataPin,clockPin,MSBFIRST,LED1s);
digitalWrite(latchPin,HIGH);
//Serial.println(LED1s, HEX);
delay(250);
digitalWrite(latchPin,LOW);
shiftOut (dataPin,clockPin,MSBFIRST,LED2s);
digitalWrite(latchPin,HIGH);
//Serial.println(LED2s, HEX);
delay(250);

}

