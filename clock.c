#include "config.h"
void clock(void)
{
    EN = ON;
    __delay_ms(1);
    EN = OFF;
}
