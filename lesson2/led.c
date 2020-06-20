int i=0,j=0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
    for(j=0;j<=i;j++)
    {
      digitalWrite(j, HIGH);
    }
     delay(200); // Wait for 1000 millisecond(s)
    for(j=0;j<=i;j++)
     {
       digitalWrite(j, LOW);
     }
  }
     delay(200); // Wait for 1000 millisecond(s)
}