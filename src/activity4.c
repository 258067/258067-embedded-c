#include "activity4.h"
void init_print(uint16_t ubrr)
{
    UBRR0L = ubrr;
    UBRR0H = (ubrr>>8)&(0x00ff);
    UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01); //8bit data size
    UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); //enable tx and rx
}

char read()
{
    while(!(UCSR0A & (1<<RXC0)))
    {

    }
    return UDR0;
}

void write_char(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0=data;
}