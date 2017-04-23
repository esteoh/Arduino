/*
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 4
 * LCD D5 pin to digital pin 5
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 7
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);

int x;
float voltValue;

void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // set pin A3 as input for readung voltage
  pinMode(A3, INPUT);
}

void loop() {
  //Reads the analog value on pin A3 into x
  int x = analogRead(A3); 
  float voltValue = x * (5.0 / 1023.0 );
  
/*
  Serial.print("Analog value: ");
  Serial.println(x);
  Serial.print("Voltage: ");
  Serial.print(voltValue);
  Serial.println(" V");
*/

  lcd.clear();
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("Analog X: ");
  lcd.print(x);
  
  lcd.setCursor(0,1);
  lcd.print("Voltage: ");
  lcd.print(voltValue);
  lcd.print(" V");
  
  delay(5000);
}

