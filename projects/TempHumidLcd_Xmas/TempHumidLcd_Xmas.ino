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
}

void loop()  
{
  //Serial.println("\n");

  int chk = DHT11.read(DHT11PIN);
  
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("MERRY XMAS");
  lcd.setCursor(2,1);
  lcd.print("HackerSpace!");
  delay(3000);
  
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 15; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(200);
  }
  
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(200);
  }
  
  lcd.clear();
  for (int count = 0; count < 3 ; count++) {
    
    lcd.setCursor(3,0);
    lcd.print("MERRY XMAS");
    lcd.setCursor(2,1);
    lcd.print("HackerSpace!");
    lcd.noDisplay();
    delay(1000);
    lcd.display();
    delay(1000);
  }
  delay(2000);
  
  lcd.clear();
  lcd.setCursor(16,0);
  lcd.print("Humidity: ");
  lcd.print(DHT11.humidity);
  lcd.print(" %");

  lcd.setCursor(16,1);
  lcd.print("Temperature:");
  lcd.print(DHT11.temperature);
  lcd.print(" C");
  
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }
  delay(5000);
  
  
  
}/* --(end main loop )-- */


