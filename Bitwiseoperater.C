#include <stdio.h>

int main()
{
    int A=8,B=7;
    printf("%d\n",A&B);//Bitwise AND (Simple AND)
    
    printf("%d\n",A|B);//Bitwise OR(simple OR)
    
    printf("%d\n",A^B);//EXclusive OR(take two bits add them and take remainder after divide by two)
    
    printf("%d\n",A<<1);//Left shift  (doing right shift is like multiply by 2)
    
    printf("%d\n",A>>1);//Right shift (doing right shift is like divide by 2)
    
    return 0;
}

/*OUTPUT:
0    |  AND operation: A=00001000(taking 8 bits)
     |                &B=00000111
     |                -----------
     |                  00000000
     |             
     
15   |  OR operation   A=00001000
     |                |B=00000111  
     |                -----------
     |                   00001111
     
15   | Exclusive OR operation   A=00001000
     |                          ^B=00000111  ::(1+1=2%2=0)(1+0=1%2=1)
     |                          -----------
     |                             00001111
     
     |                 
16   |   Left shift A=00001000<<1(8*2=16)
     |             -----------
     |               00010000
     |               
     
4    |  right shift A=00001000>>1(8/2=4)
     |               -----------
     |               00000100
*/
