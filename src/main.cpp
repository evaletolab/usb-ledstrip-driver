#include <WProgram.h>
#include <avr/sleep.h>
#include <avr/power.h>

 /**
  * main.cpp - 
  * Copyright (c) 2012 O. Evalet.  All right reserved.
  *
  * This library is free software; you can redistribute it and/or
  * modify it under the terms of the GNU Lesser General Public
  * License as published by the Free Software Foundation; either
  * version 3 of the License, or (at your option) any later version.
  * 
  * This library is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  * Lesser General Public License for more details.
  * 
  * You should have received a copy of the GNU Lesser General Public
  * License along with this library; if not, write to the Free Software
  * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  **/

// ATMEL ATTINY45 / ARDUINO
//
//                           +-\/-+
//  Ain0       (D  5)  PB5  1|    |8   VCC
//  Ain3       (D  3)  PB3  2|    |7   PB2  (D  2)  INT0  Ain1
//  Ain2       (D  4)  PB4  3|    |6   PB1  (D  1)        pwm1
//                     GND  4|    |5   PB0  (D  0)        pwm0
//                           +----+

// LED PWM to digital pin 0
#define LED 0



//
// energy saver 
void prescaler(byte mode){
  cli();
  CLKPR=bit(CLKPCE);
  CLKPR=mode;
  sei();
}

//
// energy saver 
// prescale of 2² (4)  5,3mA with a328p (prescale 0 => 8,5mA)
void sleep(int t){
  prescaler(2);
  long l=millis()+t/4;
  while(millis()<l){
  	set_sleep_mode(SLEEP_MODE_IDLE);
  	sleep_mode();
  }
  prescaler(0);
}



void setup()  { 
} 


void loop()  { 
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(LED, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    sleep(30);                            
  } 

  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(LED, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    sleep(30);                            
  } 
}

