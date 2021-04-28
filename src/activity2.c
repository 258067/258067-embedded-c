#include "activity2.h"

void InitADC()
{
    ADMUX=(1<<REFS0);  // For Aref=Avcc
    ADCSRA=(1<<ADEN) | (7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;  //clearing bits mux0,mux1,mux2 bits of ADMUX
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);  // Start conversion
    while(!(ADCSRA & (1<<ADIF)));  //Wait for conversion to complete
    ADCSRA|=(1<<ADIF);  //clear ADIF by writing 1
    return(ADC);
}

void activity2()
{
    InitADC();

    while(1)
    {
        ReadADC(0);
        _delay_ms(200);
    }
}