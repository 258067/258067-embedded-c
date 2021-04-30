#include <avr/io.h>
#include <activity1.h>
#include <activity2.h>
#include <activity3.h>
#include <activity4.h>

int main(void)
{
    avr_init();  //initialise the input and output pins
    InitADC();  //initialise the ADC pins
    initpwm();  //initialise the pwm pins
    init_print(103); //initialise USART pins
    uint16_t temp;
   while(1)
   {
        activity1_loop();
       if (LED_IS_ON)
       {
            temp=ReadADC(0);
            tempsenseout(temp);
            _delay_ms(200);
       }
   }
return 0;
}