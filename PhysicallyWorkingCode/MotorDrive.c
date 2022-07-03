#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif
#include <avr/io.h> // standard AVR library
#include <util/delay.h> // delay library
void Forward();
void Stop();
void Reverse();
void Turn_left();
void Turn_Right();
void main()
{
    DDRC = 0xFF; // direction of port C as output
    while (1)
    {
        Forward();
        Stop();
        Reverse();
        Turn_left();
        Turn_Right();
    }
}
void Forward() // Rotate motor in clockwise
{
    PORTC = 0x05; // 00000101
    _delay_ms(400);
}
void Stop() // Stop motor
{
    PORTC = 0x00;// 00000000
    _delay_ms(200);
}
void Reverse() // Rotate motor in anticlockwise
{
    PORTC = 0x0A; // 00001010
    _delay_ms(400);
}
void Turn_left() // turn left
{
    PORTC = 0x04;// 00000100
    _delay_ms(400);
}
void Turn_Right() // turn right
{
    PORTC = 0x01;// 00000001
    _delay_ms(400);
}
