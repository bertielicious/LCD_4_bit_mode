/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 14 November 2018, 18:15
 */


#include <xc.h>
#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include "config.h"
#include "init_ports.h"
#include "init_eusart.h"
#include "init_4bitLCD.h"
#include "lcd_write.h"
#include "clock.h"
void main(void) 
{
    const unsigned char freqT[]={"Tonya's new car!"};    // text to be displayed on LCD
    unsigned char *ptrT = &freqT[0];
    const unsigned char posnT[]={0x80};//start position of text
    unsigned char *ptrT2 = &posnT[0];
    
    const unsigned char freq[]={"Mini Clubman"};    // text to be displayed on LCD
    unsigned char *ptr = &freq[0];
    const unsigned char posn[]={0xc2};//start position of text
    unsigned char *ptr2 = &posn[0];
    init_ports();
    init_eusart();
    init_4bitLCD();
    printf("hello world\n");
    
    /* position text to written to LCD on any of 16 horizontal positions  (0x80 - 0x8f), on line 1 or line 2 (0xc0 - 0xcf)*/
    RS = 0;                     // put LCD into command mode
    lcd_write(posnT);            // tell LCD where text shout start 1st row 0x80 - 0x8f, 2nd row 0xc0 - 0xcf
    
    /* write text data to LCD */
     while(*ptrT != '\0')        // repeat loop until null character is detected (end of string) 
     {
        RS = 1;                 // put LCD into data mode
        lcd_write(ptrT);         // write text data to LCD in 4 bit mode
        ptrT++;                  // read the next text character from the string
     }
    
    /* position text to written to LCD on any of 16 horizontal positions  (0x80 - 0x8f), on line 1 or line 2 (0xc0 - 0xcf)*/
    RS = 0;                     // put LCD into command mode
    lcd_write(ptr2);            // tell LCD where text shout start 1st row 0x80 - 0x8f, 2nd row 0xc0 - 0xcf
    
    /* write text data to LCD */
     while(*ptr != '\0')        // repeat loop until null character is detected (end of string) 
     {
        RS = 1;                 // put LCD into data mode
        lcd_write(ptr);         // write text data to LCD in 4 bit mode
        ptr++;                  // read the next text character from the string
     }
   
    while(1)
    {
     
        PORTCbits.RC1 = 1;
        __delay_ms(500);
        PORTCbits.RC1 = 0;
        __delay_ms(500);
    }
}
