/*
 * Copyright (c) 2026 study-gowin100
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#define DELAY_MS 333
int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int step = 0;
int pinMax = 13;
void setup()
{
  for (int pin : ledPins)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  if (step > pinMax)
  {
    step = 0;
  }
  for (int pin : ledPins)
  {
    digitalWrite(pin, pin == step ? HIGH : LOW);
  }
  step++;
  delay(DELAY_MS);
}
