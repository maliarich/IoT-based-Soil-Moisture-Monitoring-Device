# IoT-based-Soil-Moisture-Monitoring-Device
This IoT project uses soil moisture sensor to notify the user when the soil gets too dry or too wet

**Soil moisture plays vital role in plant growth and provides them nutrients. Therefore, it is important to detect the soil moisture content for proper development of plants. This IoT project uses soil moisture sensor to notify the user when the soil gets too dry or too wet. This device is developed on Arduino platform and has the capability to communicate with sound** 

## Improvements

1- Wifi System

2- Bluetooth

![photo_2022-03-28_13-52-24](https://user-images.githubusercontent.com/56769901/199921680-a185489f-6de7-4b89-bad0-ac31d84256bb.jpg)

## COMPONENTS AND SUPPLIES

1- Arduino Uno

2- Jumper wires

3- Active Buzzer

4- Seven Segment Display


## CODE

```int a =13;
int b =12;
int c =11;
int d =10;
int e = 9;
int f = 8;
int g = 7;
int sound =6;
void setup() {
  // put y  
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
 pinMode(sound,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A5);   
  Serial.println(value);
  if(value>500){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(sound,HIGH);
    delay(2000);
    digitalWrite(sound,LOW);
    }
  else if(value<500&value>300){
     digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    
   
  }
else{
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH); 
}
}```
