// UT ESCOBEDO 

char valor;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    valor = Serial.read();
    if(valor == 'A')
    {
      //Accion
    }
  }
}
