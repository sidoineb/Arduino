// #################################################
// ##          Ultrason-Arduino HC-SR04           ##
// ##              de Sidoine B.                  ##
// ## HC --> Arduino     Led1->Pin9   (\___/)     ##
// ## Trig --> Pin12     Led2->Pin8   (='.'=)     ##
// ## Echo --> Pin11     Led3->Pin7   (")_(")     ##
// #################################################

int trig = 12;
int echo = 11;
long lecture_echo;
long cm;

void setup()
{
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  lecture_echo = pulseIn(echo, HIGH);
  cm = lecture_echo / 58;
  Serial.print("Distance en cm : ");
  Serial.println(cm);
  delay(1000);
}
