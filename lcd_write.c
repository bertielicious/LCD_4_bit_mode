#include "config.h"
#include "clock.h"
#include <stdbool.h>
#include <stdio.h>
void lcd_write( unsigned char *alpha)
{
    int temp;
       
        D7 = (*alpha & 0x80) >> 7;  // mask all bits except bit 7, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D7;
        printf("%d\n", temp);
        
        D6 = (*alpha & 0x40) >> 6;  // mask all bits except bit 6, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D6;
        printf("%d\n", temp);
        
        D5 = (*alpha & 0x20) >> 5;  // mask all bits except bit 5, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D5;
        printf("%d\n", temp);
       
        D4 = (*alpha & 0x10) >> 4;  // mask all bits except bit 4, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D4;
        printf("%d\n", temp);
      
        clock();
        __delay_ms(5);
        
       
 
        D7 = (*alpha & 0x08) >> 3;  // mask all bits except bit 3, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D7;
        printf("%d\n", temp);
        
        D6 = (*alpha & 0x04) >> 2;  // mask all bits except bit 2, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D6;
        printf("%d\n", temp);
     
        D5 = (*alpha & 0x02) >> 1;  // mask all bits except bit 1, then shift it left into bit 0 position, so it is either worth 1 or 0
        temp = D5;
        printf("%d\n", temp);
        
     
        D4 = (*alpha & 0x01);       // mask all bits except bit 0, no need to shift left as it is already in bit 0 position
        temp = D4;
        printf("%d\n", temp);
     
        clock();
        __delay_ms(5);
       
}
