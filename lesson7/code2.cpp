int pinInterrupt = 2; 
 
void onChange()
{
   if ( digitalRead(pinInterrupt) == LOW )
      Serial.println("Key Down");
   else
      Serial.println("Key UP");
}
 
void setup()
{
   Serial.begin(9600); 
 
   pinMode( pinInterrupt, INPUT);
   attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
}
 
void loop()
{
  for (int i = 0; i < 100; i++)
  {
    delay(10); 
  }
}

