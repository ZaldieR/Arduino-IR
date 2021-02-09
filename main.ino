void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int obstacle = digitalRead(7);
  Serial.println(obstacle);
  delay(500);
}
