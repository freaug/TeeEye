//output pins in order of alphabet array
int alphPins[26] = {
  A0,  47, 43, 17, A2,
  A11, 38, 20, 44, 18,
  16,  3,  40, 5,  A8,
  7,   A7, 4,  A3, 14,
  26, 36, 37, A13, 23,
  A4
};
//spacer
int demark = 33;
//connected but didn't work just have them flash
int noOutput[18] = {
  A5, A6, A9, A12, A14,
  11, 19, 29, 30, 
  31, 32,  39, 41, 46, 
  48, 49,  50, 52
};
//power up clear screen
int initPins[4] = {
  42, 24, 10, A10
};
//alphabet
char alphabetLower[27] = {
  'a', 'b', 'c', 'd', 'e',
  'f', 'g', 'h', 'i', 'j',
  'k', 'l', 'm', 'n', 'o',
  'p', 'q', 'r', 's', 't',
  'u', 'v', 'w', 'x', 'y',
  'z', '"'
};
//sting to output to screen
String w = "hello world"
void setup() {
  //setup init pins for output and set to low
  for (int i = 0; i < 4; i++) {
    pinMode(initPins[i], OUTPUT);
    digitalWrite(initPins[i], LOW);
  }
  //setup alpha pins for output and set to low
  for (int i = 0; i < 26; i++) {
    pinMode(alphPins[i], OUTPUT);
    digitalWrite(alphPins[i], LOW);
  }
  //setup up no output pins for output and set to low
  for (int i = 0; i < 20; i++) {
    pinMode(noOutput[i], OUTPUT);
    digitalWrite(noOutput[i], LOW);
  }
  //demarcation pin
  pinMode(demark, OUTPUT);
  digitalWrite(demark, LOW);
  //turn on calculator
  power();
  //clearscreen from last time we used it
  clearScreen();
  //set to alpha lock for letters
  setCaps();
}
void loop() {
  clearScreen();
  //beep random leds for visual effect
  randomBlips(100);
  spacer();
  randomBlips(100);
  spacer();
  randomBlips(100);
  spacer();
  randomBlips(100);
  spacer();
  randomBlips(100);
  //write whatever out output string is to the screen
  writeWords(w, 100);
  randomBlips(100);
}
//need to get past the dead part of the screen so we call this function to write filler characters to do that
void spacer() {
  for (int i = 0; i < 16; i++) {
    digitalWrite(demark, HIGH);
    delay(50);
    digitalWrite(demark, LOW);
    delay(50);
  }
}
//helper function to make sure the aphaPins are writing the correct letters
void letters() {
  for (int i = 0; i < 26; i++) {
    digitalWrite(alphPins[i], HIGH);
    delay(250);
    digitalWrite(alphPins[i], LOW);
    delay(250);
  }
}
//writes our output string to screen.  Probably a more elegant way to do this but brute force works too!
void writeWords(String _in, int _del) {
  int del = _del;
  String in = _in;
  for (int i = 0; i < in.length(); i++) {
    switch (in[i]) {
      case 'a':
        digitalWrite(alphPins[0], HIGH);
        delay(del);
        digitalWrite(alphPins[0], LOW);
        delay(del);
        break;
      case 'b':
        digitalWrite(alphPins[1], HIGH);
        delay(del);
        digitalWrite(alphPins[1], LOW);
        delay(del);
        break;
      case 'c':
        digitalWrite(alphPins[2], HIGH);
        delay(del);
        digitalWrite(alphPins[2], LOW);
        delay(del);
        break;
      case 'd':
        digitalWrite(alphPins[3], HIGH);
        delay(del);
        digitalWrite(alphPins[3], LOW);
        delay(del);
        break;
      case 'e':
        digitalWrite(alphPins[4], HIGH);
        delay(del);
        digitalWrite(alphPins[4], LOW);
        delay(del);
        break;
      case 'f':
        digitalWrite(alphPins[5], HIGH);
        delay(del);
        digitalWrite(alphPins[5], LOW);
        delay(del);
        break;
      case 'g':
        digitalWrite(alphPins[6], HIGH);
        delay(del);
        digitalWrite(alphPins[6], LOW);
        delay(del);
        break;
      case 'h':
        digitalWrite(alphPins[7], HIGH);
        delay(del);
        digitalWrite(alphPins[7], LOW);
        delay(del);
        break;
      case 'i':
        digitalWrite(alphPins[8], HIGH);
        delay(del);
        digitalWrite(alphPins[8], LOW);
        delay(del);
        break;
      case 'j':
        digitalWrite(alphPins[9], HIGH);
        delay(del);
        digitalWrite(alphPins[9], LOW);
        delay(del);
        break;
      case 'k':
        digitalWrite(alphPins[10], HIGH);
        delay(del);
        digitalWrite(alphPins[10], LOW);
        delay(del);
        break;
      case 'l':
        digitalWrite(alphPins[11], HIGH);
        delay(del);
        digitalWrite(alphPins[11], LOW);
        delay(del);
        break;
      case 'm':
        digitalWrite(alphPins[12], HIGH);
        delay(del);
        digitalWrite(alphPins[12], LOW);
        delay(del);
        break;
      case 'n':
        digitalWrite(alphPins[13], HIGH);
        delay(del);
        digitalWrite(alphPins[13], LOW);
        delay(del);
        break;
      case 'o':
        digitalWrite(alphPins[14], HIGH);
        delay(del);
        digitalWrite(alphPins[14], LOW);
        delay(del);
        break;
      case 'p':
        digitalWrite(alphPins[15], HIGH);
        delay(del);
        digitalWrite(alphPins[15], LOW);
        delay(del);
        break;
      case 'q':
        digitalWrite(alphPins[16], HIGH);
        delay(del);
        digitalWrite(alphPins[16], LOW);
        delay(del);
        break;
      case 'r':
        digitalWrite(alphPins[17], HIGH);
        delay(del);
        digitalWrite(alphPins[17], LOW);
        delay(del);
        break;
      case 's':
        digitalWrite(alphPins[18], HIGH);
        delay(del);
        digitalWrite(alphPins[18], LOW);
        delay(del);
        break;
      case 't':
        digitalWrite(alphPins[19], HIGH);
        delay(del);
        digitalWrite(alphPins[19], LOW);
        delay(del);
        break;
      case 'u':
        digitalWrite(alphPins[20], HIGH);
        delay(del);
        digitalWrite(alphPins[20], LOW);
        delay(del);
        break;
      case 'v':
        digitalWrite(alphPins[21], HIGH);
        delay(del);
        digitalWrite(alphPins[21], LOW);
        delay(del);
        break;
      case 'w':
        digitalWrite(alphPins[22], HIGH);
        delay(del);
        digitalWrite(alphPins[22], LOW);
        delay(del);
        break;
      case 'x':
        digitalWrite(alphPins[23], HIGH);
        delay(del);
        digitalWrite(alphPins[23], LOW);
        delay(del);
        break;
      case 'y':
        digitalWrite(alphPins[24], HIGH);
        delay(del);
        digitalWrite(alphPins[24], LOW);
        delay(del);
        break;
      case 'z':
        digitalWrite(alphPins[25], HIGH);
        delay(del);
        digitalWrite(alphPins[25], LOW);
        delay(del);
        break;
      case ' ':
        digitalWrite(demark, HIGH);
        delay(del);
        digitalWrite(demark, LOW);
        delay(del);
    }
  }
}
//just randomly turn leds on/off that arent assigned to a key on the calculator
void randomBlips(int del) {
  for (int i = 0; i < 18; i++) {
    int pinToBlip = random(18);
    digitalWrite(noOutput[pinToBlip], HIGH);
    delay(del);
    digitalWrite(noOutput[pinToBlip], LOW);
    delay(del);
  }
}
//turns calculator on
void power() {
  digitalWrite(42, HIGH);
  delay(250);
  digitalWrite(42, LOW);
  delay(250);
}
//clears the screen
void clearScreen() {
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(10000); //screen clearing takes a bit so we pause until it's done to make sure things don't end poorly.
  setCaps(); //function to get to alpha lock mode so we can type words
}
//alpha lock mode to type words
void setCaps() {
  digitalWrite(24, HIGH);
  delay(250);
  digitalWrite(24, LOW);
  delay(250);
  digitalWrite(A10, HIGH);
  delay(250);
  digitalWrite(A10, LOW);
  delay(250);
}
