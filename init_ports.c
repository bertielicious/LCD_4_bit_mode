//#include <pic16f690.h>
#include <xc.h>
void init_ports(void)
{
    CM1CON0 = 0x00;     // all comparators switched off
    CM2CON0 = 0x00;
    ANSEL = 0x00;       // all ADC channels switched off
    ANSELH = 0x00;
    /*DIAGNOSTIC LED */
     TRISCbits.TRISC1 = 0;   // C1 is a digital output for yellow led
     
    /*LCD CONTROL BITS 4 BIT MODE*/
   
    TRISCbits.TRISC0 = 0;   // RS RC0 16
    TRISCbits.TRISC2 = 0;   // EN RC2 14
    TRISCbits.TRISC3 = 0;   // D4 RC3 7
    TRISCbits.TRISC4 = 0;   // D5 RC4 6
    TRISCbits.TRISC5 = 0;   // D6 RC5 5
    TRISAbits.TRISA2 = 0;   // D7 RA2 17
}
