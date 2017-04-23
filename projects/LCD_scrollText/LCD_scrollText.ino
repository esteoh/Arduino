#include <dht11.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

/*-----( Declare objects )-----*/
dht11 DHT11;
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

/*-----( Declare Constants, Pin Numbers )-----*/
#define DHT11PIN 2

void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  //Serial.begin(9600);
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.print("hello, world!");
  delay(1000);
}

void loop() {
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }
 
    // scroll 16 positions (display length + string length) to the left
    // to move it back to center:
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }
 
  // delay at the end of the full loop:
  delay(1000);

}

