int a =13;
int b =12;
int c =11;
int d =10;
int e = 9;
int f = 8;
int g = 7;
int sound = 6;

void setup() 
{
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

void loop()
{
	// put your main code here, to run repeatedly:
	int value = analogRead(A5);
	Serial.println(value);

	if(value > 500)
	{
		digitalWrite(a,HIGH);
		digitalWrite(b,HIGH);
		digitalWrite(c,HIGH);
		digitalWrite(d,HIGH);
		digitalWrite(e,LOW);
		digitalWrite(f,HIGH);
		digitalWrite(g,HIGH);
		digitalWrite(sound,HIGH);
		
		delay(2000);
		gitalWrite(sound,LOW);
	}

	else if(value<500 & value > 300)
	{
		digitalWrite(a,HIGH);
		digitalWrite(b,LOW);
		digitalWrite(c,HIGH);
		digitalWrite(d,HIGH);
		digitalWrite(e,HIGH);
		digitalWrite(f,HIGH);
		digitalWrite(g,HIGH);
	}

	else
	{
		digitalWrite(a,HIGH);
		digitalWrite(b,HIGH);
		digitalWrite(c,HIGH);
		digitalWrite(d,HIGH);
		digitalWrite(e,LOW);
		digitalWrite(f,LOW);
		digitalWrite(g,HIGH);
	}
}
