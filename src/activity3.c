#include "activity3.h"
#include "activity4.h"


void initpwm()
{
      //pin B1 is OC1A
    TCCR1A|= NON_INVERTING |(1<<WGM10)|(1<<WGM11);  //setting in non-inverting mode and selecting fast pwm 10-bit mode
    TCCR1B|= (1<<WGM12)|PRESCALER_64;  //Setting the prescaler to /64 for good resolution
    PWM_PIN_PB1;  //setting PB1(OC0A)
}

void tempsenseout(uint16_t tempout)
{
    int i;
    char temperature[10];
    if((tempout>0) && (tempout<=209))
    {
        OCR1A=205; //for timer 1 with 64 prescaler, MAX=1024=100% -> 20%=205
        temperature[0] = '2';
        temperature[1] = '0';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            write_char(temperature[i]);
        }
        _delay_ms(200); 
    }
    else if((tempout>=210) && (tempout<=499))
    {
        OCR1A=410; //for 40%
         temperature[0] = '2';
        temperature[1] = '5';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<5;i++){
            write_char(temperature[i]);
        }
        _delay_ms(200);
    }
    else if((tempout>=500) && (tempout<=699))
    {
        OCR1A=717; //for 70%
        temperature[0] = '2';
        temperature[1] = '9';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            write_char(temperature[i]);
        }        
        _delay_ms(200);
    }
    else if((tempout>=700)  && (tempout<=1024))
    {
        OCR1A=973; //for 95%
        temperature[0] = '3';
        temperature[1] = '3';
        temperature[2] = 176;
        temperature[3] = 'C';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            write_char(temperature[i]);
        }        
        _delay_ms(200);
    }
    else
    {
        OCR1A=0;
        temperature[0] = 'O';
        temperature[1] = 'F';
        temperature[2] = 'F';
        temperature[3] = ' ';
        temperature[4] = ' ';
        temperature[5] = '\0';
        for(i=0;i<=5;i++){
            write_char(temperature[i]);
        } 
        _delay_ms(200);
    }
}