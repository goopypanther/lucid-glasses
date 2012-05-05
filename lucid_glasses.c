/* Lucid dreaming goggles
By Jeremy Ruhland
Programmed for Attiny25
                ------
               -|*   |- VCC
               -|    |- 
               -|    |- LED (PB1) OC0B
           GND -|    |- LED (PB0) OC0A
                ------
*/

#include <avr/io.h>
#include <util/delay.h>
#include <avr/sleep.h>

int main(void) {
 //Var
 volatile uint8_t i;

 //set up port b
 DDRB |= 1<<PB0 | 1<<PB1; //PB0, PB1 output
 
 //Do some blinking to show it's working
 PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
 _delay_ms(1000); //wait 1 sec
 PORTB = 0; //Turn off leds
 _delay_ms(1000); //wait 1 sec
 PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
 _delay_ms(1000); //wait 1 sec
 PORTB = 0; //turn off leds

 _delay_ms(7200000); //delay 2 hours

 for(i = 18; i > 0; i--) {
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(1000);
  PORTB = 0; //Turn off leds
  _delay_ms(500);
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds   
  _delay_ms(500);              
  PORTB = 0; //Turn off leds    
  _delay_ms(500);              
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(250);
  PORTB = 0; //Turn off leds
  _delay_ms(250);
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(100);
  PORTB = 0; //Turn off leds
  _delay_ms(100);
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(100);
  PORTB = 0; //Turn off leds
  _delay_ms(100);
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(100);
  PORTB = 0; //Turn off leds
  _delay_ms(100);
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(100);
  PORTB = 0; //Turn off leds
  _delay_ms(100);
  PORTB |= 1<<PB0 | 1<<PB1; //Turn on leds
  _delay_ms(100);
  PORTB = 0; //Turn off leds
  _delay_ms(600000);         //Wait 10 minutes 
 }


 //Turn off after you're done
 PORTB = 0; //Leds off
 set_sleep_mode(SLEEP_MODE_PWR_DOWN); //Select powerdown sleep mode
 sleep_enable(); //enable sleep bit
 sleep_mode(); //sleep, don't wake up
}

