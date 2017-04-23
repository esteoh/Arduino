void setup() {

  for ( int i = 9 ; i <= 11 ; i++ )
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {

  for ( int i = 0 ; i < 256 ; i++ )
  {
    analogWrite(9, i);
    for ( int j = 0 ; j < 256 ; j++ )
    {
      analogWrite(10, j);
      for ( int k = 0 ; k < 256 ; k++ )
      {
        analogWrite(11, k);
        delayMicroseconds(100);
      }
    }
  }
  
}
