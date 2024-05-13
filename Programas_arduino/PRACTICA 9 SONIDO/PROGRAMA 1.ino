int pinzumbador = 8;
int frecuencia = 220;

void setup()
{
}

void loop()
{
tone(pinzumbador,frecuncia);
delay(2000);
noTone(pinzumbador);
delay(1000);
}