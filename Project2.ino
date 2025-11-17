// C++ code
//
int green = 0;
int yellow = 2;
int orange = 4;
int blue = 6;
int red = 8;
int white = 9;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop()
{
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  digitalWrite(orange, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(orange, LOW);
  digitalWrite(blue, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  digitalWrite(white, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(white, LOW);
}
