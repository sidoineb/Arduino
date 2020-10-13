// ######################################
// ##        Blink led sur pin9        ##
// ##          Par Sidoine B.          ##
// ######################################

int led1 = 9;
int temps = 500;
void setup() {
  pinMode(led1 , OUTPUT);
}

void loop() {
 digitalWrite(led1 , HIGH);
 delay(temps);
 digitalWrite(led1 , LOW);
 delay(temps);
}
