#include "activity2.h"

void InitADC()
{
    SET_REFERENCE;  // For Aref=Avcc
    ADCSRA= ENABLE_ADC | PRESCALER;
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;  //clearing bits mux0,mux1,mux2 bits of ADMUX
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);  // Start conversion
    while(CONVERSION_NOT_COMPLETE);  //Wait for conversion to complete
    CLEAR_ADIF;  //clear ADIF by writing 1
    return(ADC);
}


