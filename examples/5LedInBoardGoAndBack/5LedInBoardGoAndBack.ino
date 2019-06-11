int BASE = 10 ;  // the I/O pin for the first LED
int NUM = 5;   // number of LEDs

void setup()
{
  
   Serial.begin(9600);
   for (int i = 0; i < NUM; i ++) 
   {
     pinMode(BASE-(i*2), OUTPUT);   // set I/O pins as output
   }
}

void loop()
{
   for (int i = 0; i < NUM; i ++) 
   {
     digitalWrite(BASE-(i*2), HIGH);    // set I/O pins as “low”, turn off LEDs one by one.
     delay(200);        // delay
     digitalWrite(BASE-(i*2), LOW);    // set I/O pins as “high”, turn on LEDs one by one
   }  
}
