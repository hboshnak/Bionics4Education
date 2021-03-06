//TEMPERATURE

//TASK 1

//LIBRARY
#include <ESP32Servo.h>
#include <OneWire.h>
#include <DallasTemperature.h>

//Temperature sensor
int PIN_TEMPERATURE=26;
OneWire oneWire(PIN_TEMPERATURE);
DallasTemperature sensors(&oneWire);

//servomotor
Servo servo; 

//GLOBALES VARIABLES
//GPIO 
//LED 
int PIN_LED=16; 

//SETUP: function that initialize the components and display a start message to the serial monitor
 void setup()
 {
  //INITIALIZATION
  //ESP32 sends information to the LED
  pinMode(PIN_LED, OUTPUT);
 
  //SERIAL COMMUNICATION
  Serial.begin(9600);
  delay(5000);
  Serial.println("Temperature: task 1!");  

  //Start the temperature sensor
  sensors.begin();
}

//LOOP: function that flash the simple LED - the code will be executed repeatedly
void loop()  
{ 
  //FLASHING LED 
  //turn on LED 
  digitalWrite(PIN_LED, HIGH); 
  delay(500);
  
  //turn off LED 
  digitalWrite(PIN_LED, LOW);
  delay(500);
}