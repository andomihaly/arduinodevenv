
int BASE = 2 ;  // the I/O pin for the first LED
int NUM = 5;   // number of LEDs
int inpin=8;// initialize pin 7
int buzzer=12;
int val;// define val
void setup()
{
  Serial.begin(9600);
  for (int i = BASE; i < BASE + NUM; i ++) 
  {
    pinMode(i, OUTPUT);   // set I/O pins as output
  }
  pinMode(buzzer,OUTPUT);
  pinMode(inpin,INPUT);// set button pin as “input”
}
void loop()
{
  val=digitalRead(inpin);// read the level value of pin 7 and assign if to val
  if(val==HIGH)// check if the button is pressed, if yes, turn on the LED
    {ButtonTrigger(); }
}

void ButtonTrigger()
{
   int currentLed=BASE;
   int ledDirection = 1;
   int counter = 0;
   while (counter < 25) 
   {
      if (ledDirection == 1)
      {
        if (currentLed == BASE + NUM -1)
        {
          ledDirection = 2;
          currentLed--;
        }
        else
        {
          currentLed++;
        }
      }
      else
      {
        if (currentLed == BASE)
        {
          ledDirection = 1;
          currentLed++;
        }
        else
        {
          currentLed--;
        }
      }
      String out = "Direction: " + String(ledDirection) + " current led: " + String(currentLed);
      Serial.println(out);
      digitalWrite(currentLed, HIGH);    // set I/O pins as “low”, turn off LEDs one by one.
      digitalWrite(buzzer, HIGH);
      delay(100);        // delay
      digitalWrite(buzzer, LOW);
      delay(150);        // delay
      digitalWrite(currentLed, LOW);    // set I/O pins as “high”, turn on LEDs one by one
      
      counter++;
   }  
   
}
