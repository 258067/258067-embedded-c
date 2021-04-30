#include "activity1.h"
void led_state(uint8_t state)
{
     LED_PORT = state<<LED_PIN;
}
void avr_init()
{
    LED_PIN_OUTPUT;
    SEAT_SWITCH_INPUT;
    HEATER_PIN_INPUT;

}
void activity1_loop()
{
    if((SEAT_SWITCH_ON) && (HEATER_ON))
    {
        led_state(LED_ON);
    }
    else
    {
        led_state(LED_OFF);
    }

}
