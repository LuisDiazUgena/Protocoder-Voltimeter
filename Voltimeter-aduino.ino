int pinSonda = A0;
float escala = 100; //100 para voltios, 0.1 para milivoltios

void setup(){
	
	Serial.begin(19200);

	pinMode(pinSonda, INPUT);

}

void loop(){

		float lecture = analogRead(pinSonda);

		lecture = map(lecture, 0, 1023, 0, 500);

		float voltaje = lecture/escala;

		Serial.println(voltaje);
		
}

