void setup() {
  // put your setup code here, to run once:
  int pin = 13;
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Message: HI ALVIN
  for (int i = 0; i < 4; i++) {
    dot();
  } //H end
  letterEnd();
  for (int i = 0; i < 2; i++) {
    dot();
  } //I end
  wordEnd();
  dot();
  dash();
  letterEnd();//end of A
  dot();
  dash();
  for(int i = 0; i < 2; i++) {
    dot();
  }
  letterEnd();//end of L
  for(int i = 0; i < 3; i++) {
    dot();
  }
  dash();
  letterEnd();//end of V
  for(int i = 0; i < 2; i++) {
    dot();
  }
  letterEnd();//end of I
  dash();
  dot();
  wordEnd();//end of N
}

void dot() { //Morse code dot length (one second)
  int pin = 13;
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(1000);  
}

void dash() { //Morse code dash (three seconds)
  int pin = 13;
  digitalWrite(pin,HIGH);
  delay(3000);
  digitalWrite(pin,LOW);
  delay(1000);    
}

//dots and dashes have ends built in

void letterEnd() { //Morse Letter end (off for 3 seconds)
  //keep in mind: theres already a 1000 ms break for each dot/dash
  delay(2000);
  // 1000+2000=3000 (3s)
}

void wordEnd() {//Morse Word end (off for 5 seconds
  delay(4000);
  //1000+4000=5000 (5s)
}
