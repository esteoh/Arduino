// Blink with vary power
 
// Pin 11 PWM has an LED connected.
// give it a name:
int led = 11;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

void loop() {
  for (int i = 0 ; i < 256 ; i++)
  {
    analogWrite(led, i);
    delay(100);               // wait for 0.1 second
  }
}

