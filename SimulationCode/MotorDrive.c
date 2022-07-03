#ifndef F_CPU
#define F_CPU 16000000UL // 16MHz clock speed
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    DDRC = 0xFF; //PORTB as Output
    while(1)
    {
        //Rotates Motor in Antilockwise
        PORTC = 0x01; //00000001
        _delay_ms(4000);
        //Stops Motor
        PORTC = 0x00; //00000000
        _delay_ms(4000);
        //Rotates Motor in Clockwise
        PORTC = 0x02; //00000010
        _delay_ms(4000);
        //Stops Motor
        PORTC
        = 0x03; //00000011
        _delay_ms(4000);
    }
}