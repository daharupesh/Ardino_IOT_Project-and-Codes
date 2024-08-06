int raindetect = 4; 
int led = 13;
void setup() {
 Serial.begin(9600);
 pinMode(raindetect, INPUT);
 pinMode(led, OUTPUT);
}
void loop() {
 int raindetectionvalue = digitalRead(raindetect);

 Serial.println(raindetectionvalue);
 if (raindetectionvalue == HIGH)
 {
 Serial.println("it is raining");
 digitalWrite(led,HIGH);
 }
 else
 {
 digitalWrite(led,LOW);
 Serial.println("It is not raining..");
 }
 delay(500); 
}