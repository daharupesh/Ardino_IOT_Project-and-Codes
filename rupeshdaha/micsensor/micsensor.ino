int const soundcapture=A0;
int const ledpin = 13;
void setup(){
    pinMode(soundcapture,INPUT);
    pinMode(ledpin,OUTPUT);
    Serial.begin(9600);
}
void loop(){
  int microphoneValue = analogRead(soundcapture);
  Serial.println(microphoneValue);
  int threshold = 500;
  if(microphoneValue>threshold){
    digitalWrite(ledpin,1);
    Serial.println("sound detected.....");
    
  }
  else{
    digitalWrite(ledpin,0);
    Serial.println("sound doesnot detected..");
  }
  delay(100);
  
}