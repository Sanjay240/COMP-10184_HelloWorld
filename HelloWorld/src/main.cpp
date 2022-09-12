/**
 * I Sanjay Kumar, 000811237 verified that the submiited work is my own work.
 */

#include <Arduino.h>
unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  //print some text to the USB port
  Serial.println("\n\nHello, World");
  Serial.println("\nStudent id: 000811237");
  Serial.println("Chip id: " + String(ESP.getChipId()));
  Serial.println("Flask id: " + String(ESP.getFlashChipId()));

  

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Time: ");
  myTime = millis();

  Serial.println((myTime)); // prints time since program started
  delay(2000);
}