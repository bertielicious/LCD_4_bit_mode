/* 
 * File:   config.h
 * Author: Phil Glazzard
 *
 * Created on 14 November 2018, 13:49
 */

#ifndef CONFIG_H
#define	CONFIG_H

// PIC16F690 Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select bit (MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown-out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.
#define _XTAL_FREQ 4000000
#include <xc.h>
/* define aliases for PORT pins*/
#define RS PORTCbits.RC0    // RC0 16
#define EN PORTCbits.RC2    // RC2 14
#define D4 PORTCbits.RC3    // RC3 7
#define D5 PORTCbits.RC4    // RC4 6
#define D6 PORTCbits.RC5    // RC5 5
#define D7 PORTAbits.RA2    //  D7 17

/* DEFINE ON and OFF*/
#define ON 1
#define OFF 0

#endif	/* CONFIG_H */




