#include "config.h"
#include "clock.h"
void init_4bitLCD(void)
{
    __delay_ms(110);         // wait while VDD establishes itself        1
    RS = 0;                  // Function set interface 8 bits            2
    D7 = 0;
    D6 = 0;
    D5 = 1;
    D4 = 1;
    
    __delay_ms(5);
    clock();
    
    
    RS = 0;                 // Function set interface 8 bits            3
    D7 = 0;
    D6 = 0;
    D5 = 1;
    D4 = 1;
    __delay_us(200);
    clock();
    
   
    RS = 0;                 // Function set interface 8 bits            4
    D7 = 0;
    D6 = 0;
    D5 = 1;
    D4 = 1;
     __delay_us(200);
     clock();
     
    RS = 0;                 // Function set interface 4 bits            5
    D7 = 0;
    D6 = 0;
    D5 = 1;
    D4 = 0;
     __delay_us(200);
     clock();
     
    RS = 0;                 // Function set interface 4 bits            6a
    D7 = 0;
    D6 = 0;
    D5 = 1;
    D4 = 0;
     __delay_us(100);
     clock();
     
    RS = 0;                 // Function set interface 4 bits            6b
    D7 = 1;                 // N = 1   (2 lines))
    D6 = 0;                 // F = 1 (large font) 
    D5 = 0;
    D4 = 0;
     __delay_us(100);
     clock();
     
    /* Display ON*/ 
    RS = 0;                 // Number of display lines and              7a
    D7 = 0;                 // character font cannot be changed now
    D6 = 0;
    D5 = 0;
    D4 = 0;
     __delay_ms(5);
     clock();
    
    RS = 0;                                                         //    7b          
    D7 = 1;
    D6 = 0;
    D5 = 0;
    D4 = 0;
    __delay_ms(5);
     clock();
     
    RS = 0;                 // Display clear                            8a
    D7 = 0;
    D6 = 0;
    D5 = 0;
    D4 = 0;
    __delay_ms(5);
     clock();
    
    RS = 0;                 // Clear display                            8b
    D7 = 0;
    D6 = 0;
    D5 = 0;
    D4 = 1;
    __delay_ms(5);
     clock();
     
    
    RS = 0;                 // Display clear                            9a
    D7 = 0;
    D6 = 0;
    D5 = 0;
    D4 = 0;
    __delay_ms(5);
     clock();
    
    RS = 0;                 // Display off                              9b
    D7 = 0;
    D6 = 1;
    D5 = 1;
    D4 = 0;
    __delay_ms(5);
     clock();
    
    RS = 0;                 // Display off                              11a
    D7 = 0;
    D6 = 0;
    D5 = 0;
    D4 = 0;
    __delay_ms(5);
     clock();
     
    RS = 0;                 // Display off                              11b
    D7 = 1;
    D6 = 1;
    D5 = 0;                 // cursor off
    D4 = 0;                 // cursor blink off
    __delay_ms(5);
     clock();
}
