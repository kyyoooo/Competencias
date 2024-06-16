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
