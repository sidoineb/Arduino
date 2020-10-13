// #########################################
// ##  Chenillard Led ports 9,10,11,12    ##
// ##             Sidoine B.              ##
// #########################################

int led1 = 9;
int led2 = 10;
int led3 = 11;
int led4 = 12;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay (1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay (1000);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay (1000);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay (1000);
  digitalWrite(led4, LOW);
}
