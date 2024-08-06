int sensorPin = A0; // select the input pin for the potentiometer
int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
 // begin the serial monitor @ 9600 baud
 Serial.begin(9600);
}
void loop() {
 // read the value from the sensor:
 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
 Serial.print(" ");
 delay(20);
}