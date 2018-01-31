/*
# Example code for the moisture sensor
# Connect the sensor to the A0 (Analog 0) pin on the Arduino board
# the sensor value description
# 0 ~300 dry soil
# 300~700 humid soil
# 700~950 in water
*/

int i, value;

void setup() {
	Serial.begin(57600);
	Serial.println("Starting...");
}

void loop() {
	value = 0;
	for (i = 0; i < 2; i++) {
		value += analogRead(0);
		delay(2000);
	}
	Serial.print("Moisture Sensor Value:");
	Serial.println(value/2);
}