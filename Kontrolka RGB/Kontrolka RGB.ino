/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

#include <LiquidCrystal.h> //Dołączenie bilbioteki
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin1 =  9;      // the number of the LED pin
const int ledPin2 =  10;
const int ledPin3 =  11;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int odczytanaWartosc1 = 0;
int odczytanaWartosc2 = 0;
int odczytanaWartosc3 = 0;


void setup() {
  // initialize the LED pin as an output:
 // Make sure backlight is on
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Witamy w Arduino");
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  odczytanaWartosc1 = analogRead(A3);
  odczytanaWartosc2 = analogRead(A2);
  odczytanaWartosc3 = analogRead(A1);
  odczytanaWartosc1 = map(odczytanaWartosc1, 0, 1023, 0, 255);
  odczytanaWartosc2 = map(odczytanaWartosc2, 0, 1023, 0, 255);
  odczytanaWartosc3 = map(odczytanaWartosc3, 0, 1023, 0, 255);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    Serial.println(odczytanaWartosc1);//Wysyłamy ją do terminala
    Serial.println(odczytanaWartosc2);//Wysyłamy ją do terminala
    Serial.println(odczytanaWartosc3);//Wysyłamy ją do terminala
    analogWrite(ledPin1, odczytanaWartosc1);
    analogWrite(ledPin2, odczytanaWartosc2);
    analogWrite(ledPin3, odczytanaWartosc3);


  
}
