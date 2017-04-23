//  Analog Input - Temperature

int sensorPin = A0;    // select the input pin for the sensor
int valueTemp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  valueTemp = analogRead(sensorPin);    
  valueTemp = (5.0 * valueTemp * 100.0)/1024.0;
  Serial.print("Temperature: ");
  Serial.print(valueTemp);
  Serial.println(" Celcius");
  delay(5000);
                    
}

