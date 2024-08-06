const int mhSensorPin = A0;     // Analog pin for the MH gas sensor
const int ledPin = 13;          // Digital pin for the LED
const int threshold = 300;      // Adjust this threshold value as needed

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the MH gas sensor
  int mhValue = analogRead(mhSensorPin);
  
  // Print the MH gas sensor reading to the serial monitor for debugging
  Serial.print("MH Sensor Value: ");
  Serial.println(mhValue);
  
  // Check if the gas value exceeds the threshold
  if (mhValue > threshold) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Methane gas detected!");
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }

  delay(1000); // Add a delay to prevent rapid LED toggling
}
