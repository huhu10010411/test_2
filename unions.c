#include <stdio.h>
typedef enum {BINARY_8, BINARY_16, ANALOG_1, ANALOG_2} SignalType;
typedef union 
{    /* data */
    unsigned short word;
    unsigned char byte;
    float real;
    double lreal;
} SignalValue;
typedef struct
{
    /* data */
    SignalType type;
    SignalValue value;
} Signal;
void main()
{
    SignalValue B,W;
    B.byte=0x01;
    W.word=0x0101;
    unsigned char b= W.byte;
    float f= W.real;
    Signal DI1={BINARY_8, 0X11};
    Signal AI1={ANALOG_1,{0}};
    Signal AI2;
    AI2.type =ANALOG_2;
    AI2.value.lreal =145.67;

}

