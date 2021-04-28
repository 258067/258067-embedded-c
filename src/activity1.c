#include "activity1.h"
void led_state(uint8_t state)
{
     LED_PORT = state<<LED_PIN;
}
void avr_init()
{
    DDRB|=(1<<LED_PIN);
    DDRB|=(0<<SEAT_PIN);
    DDRB|=(0<<HEATER_PIN);

}
void activity1_loop()
{
    if((PINB & (1<<SEAT_PIN)) && ((PINB) & (1<<HEATER_PIN)))
    {
        led_state(LED_ON);
    }
    else
    {
        led_state(LED_OFF);
    }

}

void activity1() 
{
    avr_init();
    while(1)
    {
        activity1_loop();
    }
}