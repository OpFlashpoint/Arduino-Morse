char stringToMorseCode[] = "Arduino Morse Code Project";

// Create variable to define the output pins
int led12 = 12;      // blink an led on output 12
int led6 = 6;        // blink an led on output 6
int audio8 = 8;      // output audio on pin 8
int note = 1200;      // music note/pitch

int dotLen = 100;    // length of the morse code 'dot'
int dashLen = dotLen * 3;    // length of the morse code 'dash'
int elemPause = dotLen;  // length of the pause between elements of a character
int Spaces = dotLen * 3;     // length of the spaces between characters
int wordPause = dotLen * 7;  // length of the pause between words

// the setup routine runs once when you press reset
void setup() {                
  // initialize the digital pin as an output for LED lights.
  pinMode(led12, OUTPUT); 
  pinMode(led6, OUTPUT); 
}

// Create a loop of the letters/words you want to output in morse code (defined in string at top of code)
void loop()
{ 
  int size;
  size = sizeof(stringToMorseCode);
  // Loop through the string and get each character one at a time until the end is reached
  for (int i = 0; i < size - 1; i++)
  {
    // Get the character in the current position
  char tmpChar = stringToMorseCode[i];
  // Set the case to lower case
  tmpChar = toLowerCase(tmpChar);
  // Call the subroutine to get the morse code equivalent for this character
  getChar(tmpChar);
  }
  
  // At the end of the string long pause before looping and starting again
  lightsOff(8000);      
}

// DOT
void MorseDot()
{
  digitalWrite(led12, HIGH);    // turn the LED on 
  digitalWrite(led6, HIGH); 
  tone(audio8, note, dotLen); // start playing a tone
  delay(dotLen);              // hold in this position
}

// DASH
void MorseDash()
{
  digitalWrite(led12, HIGH);    // turn the LED on 
  digitalWrite(led6, HIGH);
  tone(audio8, note, dashLen);  // start playing a tone
  delay(dashLen);               // hold in this position
}

// Turn Off
void lightsOff(int delayTime)
{
  digitalWrite(led12, LOW);     // turn the LED off   
  digitalWrite(led6, LOW);
  noTone(audio8);             // stop playing a tone
  delay(delayTime);             // hold in this position
}

// *** Character to Morse Code Conversion *** //
void getChar(char tmpChar)
{
  switch (tmpChar) {
    case 'a': 
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'b':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'c':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'd':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'e':
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'f':
      MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'g':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'h':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'i':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'j':
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'k':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'l':
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'm':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'n':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'o':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'p':
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 'q':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'r':
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 's':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case 't':
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'u':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'v':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'w':
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'x':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'y':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case 'z':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case '0': 
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case '1':
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case '2':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case '3':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case '4':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    break;
    case '5':
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case '6':
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case '7':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case '8':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    case '9':
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDash();
    lightsOff(elemPause);
    MorseDot();
    lightsOff(elemPause);
    break;
    
    default: 
    // If a matching character was not found it will default to a blank space
    lightsOff(Spaces);      
  }
}

