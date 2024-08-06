const int soilMoisturePin = A0; // Analog pin for the soil moisture sensor
const int ledPin = 13;         // Digital pin for the LED
const int moistureThreshold = 400; // Adjust this threshold value as needed

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);
  
  // Print the soil moisture value to the serial monitor for debugging
  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureValue);
  
  // Check if the soil moisture is below the threshold
  if (soilMoistureValue < moistureThreshold) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Soil is dry. Water the plant!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
    Serial.println("Soil is moist. No need to water.");
  }

  delay(1000); // Add a delay to prevent rapid LED toggling
}
