// C++ code
// O negativo do Led sempre é ligado ao ground

int greenled = 2;
int yellowled = 3;
int redled = 4;

void setup()
{
 pinMode(greenled, OUTPUT);
 pinMode(yellowled, OUTPUT);
 pinMode(redled, OUTPUT);
}

void loop()
{ 
 digitalWrite(redled, HIGH);
  delay(500);
 digitalWrite(redled, LOW);
 
 digitalWrite(yellowled, HIGH);
  delay(300);
 digitalWrite(yellowled, LOW);
  
 digitalWrite(greenled, HIGH);
  delay(500);
 digitalWrite(greenled, LOW);
}