#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"

float temperature;
void init_temperature_system(void)
{
    //setting heater and cooler GPIO pins as output pins
    pinMode(HEATER, OUTPUT);
    pinMode(COOLER, OUTPUT);


}

float read_temperature(void)
{
   //read the temperature sensor return the temperature
   temperature = (((analogRead(A0) * (float)5/1024))/(float) 0.01);
   return temperature;
}

void cooler_control(bool control)//receving the state of the button on the mobile app
{
  if(control) 
  { //on
 digitalWrite(COOLER, 1);


  }
  else
  { //of
 digitalWrite(COOLER,0);
 
}
  }


void heater_control(bool control)
{

if(control) 
  { //on
 digitalWrite(HEATER, 1);

  }
  else
  { //of
 digitalWrite(HEATER, 0); 

}
}