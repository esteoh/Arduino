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
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.setCursor(0,1);
  lcd.print("Temperature: ");
}

void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{
  //Serial.println("\n");

  int chk = DHT11.read(DHT11PIN);

  /* Serial.print("Read sensor: ");
  switch (chk)
  {
    case 0: Serial.println("OK"); break;
    case -1: Serial.println("Checksum error"); break;
    case -2: Serial.println("Time out error"); break;
    default: Serial.println("Unknown error"); break;
  }

  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Temperature (oC): ");
  Serial.println((float)DHT11.temperature, 2);
  */
  
  lcd.setCursor(10,0);
  lcd.print(DHT11.humidity);
  lcd.print(" %");

  lcd.setCursor(12,1);
  lcd.print(DHT11.temperature);
  lcd.print(" C");
  //lcd.print("\377C");

  delay(50000);
}/* --(end main loop )-- */


