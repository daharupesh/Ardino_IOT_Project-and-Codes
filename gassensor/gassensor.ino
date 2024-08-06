const int RainDrop = A0;  
const int ledPin = 13;        
const int threshold = 500;    

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(RainDrop,INPUT);
  Serial.begin(9600);
}

void loop() {

  int RainDetect = analogRead(RainDetect);

  if (RainDetect > threshold) {
    digitalWrite(ledPin, HIGH);  
    Serial.println("Rain detected!");
  }
  else{
    digitalWrite(ledPin , 0);
    Serial.println("Rain doesnot detected!");
  }
}