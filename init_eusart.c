
#include <pic16f690.h>

void init_eusart (void)
{
    CM1CON0 = 0x00;         // comparators off
    CM2CON0 = 0x00;
    TRISBbits.TRISB7 = 0;   // TX pin is an output
    
    TXSTAbits.TXEN = 1;     //  Setting the TXEN bit of the TXSTA register enables the
                            //  transmitter circuitry of the EUSART. The TXIF transmitter 
                            //  interrupt flag is set when the TXEN enable bit is set.
    TXSTAbits.SYNC = 0;     // Clearing the SYNC bit of the TXSTA register 
                            // configures the EUSART for asynchronous operation
    RCSTAbits.SPEN = 1;     // Setting the SPEN bit of the RCSTA register enables the EUSART and automatically
                            // configures the TX/CK I/O pin as an output. If the TX/CK
                            // pin is shared with an analog peripheral the analog I/O
                            // function must be disabled by clearing the corresponding
                            // ANSEL bit.
     SPBRG = 0x19;           // baud set to 2400
}
