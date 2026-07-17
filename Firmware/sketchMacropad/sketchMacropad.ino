void setup() {
  // pu#include <Keyboard.h>

const int numKeys = 4;
const int keyPins[numKeys] = {D0, D1, D2, D3};
const int commonPin = D9;

const char keyMap[numKeys] = {'1', '2', '3', '4'};
bool lastKeyState[numKeys] = {false, false, false, false};

void setup() {
pinMode(commonPin, OUTPUT);
digitalWrite(commonPin, LOW);

for (int i = 0; i < numKeys; i++) {
pinMode(keyPins[i], INPUT_PULLUP);
}

Keyboard.begin();
}

void loop() {
for (int i = 0; i < numKeys; i++) {
bool isPressed = (digitalRead(keyPins[i]) == LOW);

if (isPressed != lastKeyState[i]) {
if (isPressed) {
Keyboard.press(keyMap[i]);
} else {
Keyboard.release(keyMap[i]);
}
lastKeyState[i] = isPressed;
delay(15);
}
}
}
t your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
