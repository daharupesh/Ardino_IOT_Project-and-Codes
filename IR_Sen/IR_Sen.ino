int LEDpin=13;
int obstaclePin = 10;
int hasObstacle = LOW;
void setup() {
 // put your setup code here, to run once:
 pinMode(LEDpin,OUTPUT);
 pinMode(obstaclePin,INPUT);
 Serial.begin(9600);
}
void loop() {
 // put your main code here, to run repeatedly:
 hasObstacle = digitalRead(obstaclePin);
if(hasObstacle == HIGH)
 {
 Serial.println("Stop something is ahead!");
 digitalWrite(LEDpin,HIGH);
 }
 else{
 Serial.println("Path is clear");
 digitalWrite(LEDpin,LOW);
 }
 delay(1000);
}
