const int LED = 13;
const int RainDetection = A0;

int level;
const int threshold = 640;
void setup()
{
pinMode (LED, OUTPUT);
Serial.begin(9600);
}
void loop() {
level = analogRead(Sensor);
Serial.println(level);
if (level > threshold)
{
digitalWrite (LED, HIGH);
delay (1000);
digitalWrite (LED, LOW);
}
else
{
digitalWrite(LED, LOW);
}
}