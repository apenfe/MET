const int pinBuzzer = 8;

void setup()
{
}

void loop()
{
tone(pinBuzzer,440);
delay(1000);
noTone(pinBuzzer);
delay(500);
tone(pinBuzzer,523,300);
delay(500);
}