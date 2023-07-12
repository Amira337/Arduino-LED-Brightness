int led=9;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led,255);
  delay(1000);
  analogWrite(led,127);
  delay(500);
  analogWrite(led,63);
  delay(250);
  analogWrite(led,42);
  delay(166);
  analogWrite(led,31);
   delay(125); 
  analogWrite(led,25);
  delay(10); // Wait for 1000 millisecond(s)
  analogWrite(led, 0);
    delay(50); // Wait for 1000 millisecond(s)
   analogWrite(led,25);
  delay(10);
   analogWrite(led,31);
   delay(125);
   analogWrite(led,42);
  delay(166);
  analogWrite(led,63);
  delay(250);
  analogWrite(led,127);
  delay(500);
}