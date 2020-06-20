char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
//'o'为前进，其他字母为后退，不能转弯
void loop()
{
  if(Serial.available()>0)
  {
    ch=Serial.read();
    if(ch=='o')
    {
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
    }
    else
    {
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
    }
  }
  delay(200);
}