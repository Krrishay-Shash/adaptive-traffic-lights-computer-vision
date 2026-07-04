//www.elegoo.com
//2016.12.8

// Define Pins
// Pins Side 1
#define BLUE 6 //3
#define GREEN 7 //5
#define RED 5 //6
//Pins Side 2
#define BLUE2 9 //3
#define GREEN2 10 //5
#define RED2 8 //6

void setup()
{
//Initialize Side 1
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
//Initialize Side 2
pinMode(RED2, OUTPUT);
pinMode(GREEN2, OUTPUT);
pinMode(BLUE2, OUTPUT);
digitalWrite(RED2, LOW);
digitalWrite(GREEN2, HIGH);
digitalWrite(BLUE2, LOW);

}

void lightSide1 (int yRED, int yredValue, int yGREEN, int ygreenValue, int yBLUE, int yblueValue){
  analogWrite(yRED, yredValue);
  analogWrite(yGREEN, ygreenValue);
  analogWrite(yBLUE, yblueValue);

}

void lightSide2 (int xRED, int xredValue, int xGREEN, int xgreenValue, int xBLUE, int xblueValue){
  analogWrite(xRED, xredValue);
  analogWrite(xGREEN, xgreenValue);
  analogWrite(xBLUE, xblueValue);
}

// define variables
// Side 1
int redValue;
int greenValue;
int blueValue;
//Side 2
int redValue2;
int greenValue2;
int blueValue2;
// main loop
void loop()
{
#define delayTime 7000 // fading time between colors
#define delayTimeYellow 3000

redValue = 255; // choose a value between 1 and 255 to change the color.
greenValue = 0;
blueValue = 0;
redValue2 = 0;
greenValue2 = 255;
blueValue2 = 0;

/*analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
analogWrite(RED2, redValue2);
analogWrite(GREEN2, greenValue2);
analogWrite(BLUE2, blueValue2);
*/
lightSide1(RED, redValue, GREEN, greenValue, BLUE, blueValue);
lightSide2(RED2, redValue2, GREEN2, greenValue2, BLUE2, blueValue2);
delay(delayTime);

redValue = 255; // choose a value between 1 and 255 to change the color.
greenValue = 0;
blueValue = 0;
redValue2 = 0;
greenValue2 = 0;
blueValue2 = 255;

/*analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
analogWrite(RED2, redValue2);
analogWrite(GREEN2, greenValue2);
analogWrite(BLUE2, blueValue2);
*/
lightSide1(RED, redValue, GREEN, greenValue, BLUE, blueValue);
lightSide2(RED2, redValue2, GREEN2, greenValue2, BLUE2, blueValue2);
delay(delayTimeYellow);

redValue = 0; // choose a value between 1 and 255 to change the color.
greenValue = 255;
blueValue = 0;
redValue2 = 255;
greenValue2 = 0;
blueValue2 = 0;

/*analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
analogWrite(RED2, redValue2);
analogWrite(GREEN2, greenValue2);
analogWrite(BLUE2, blueValue2);
*/
lightSide1(RED, redValue, GREEN, greenValue, BLUE, blueValue);
lightSide2(RED2, redValue2, GREEN2, greenValue2, BLUE2, blueValue2);
delay(delayTime);

redValue = 0; // choose a value between 1 and 255 to change the color.
greenValue = 0;
blueValue = 255;
redValue2 = 255;
greenValue2 = 0;
blueValue2 = 0;

/*analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
analogWrite(RED2, redValue2);
analogWrite(GREEN2, greenValue2);
analogWrite(BLUE2, blueValue2);
*/
lightSide1(RED, redValue, GREEN, greenValue, BLUE, blueValue);
lightSide2(RED2, redValue2, GREEN2, greenValue2, BLUE2, blueValue2);
delay(delayTimeYellow);

}

