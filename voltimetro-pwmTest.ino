
int pinPWM = 3;

void setup(){

	pinMode(pinPWM, OUTPUT);
}

void loop(){

	for (int i=0;i<=255;i++){
		analogWrite(pinPWM, i);
		delay(10);
	}
}

