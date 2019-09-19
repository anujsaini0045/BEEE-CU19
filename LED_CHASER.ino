void setup()
{
  
   pinMode(8, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(1, OUTPUT);
   
}

void loop(){int i;
  for(i=8; i>=1 ; i--)
{
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
  delay(100);
}
             for(i=1; i<=8; i++)
             {
                digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
  delay(100);
             }             
}
