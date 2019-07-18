/*Swap bits 6 and 7 of a 32 bit variable*/
#include <stdio.h>
#define GETBIT(i,input) (((1<<i)&input)>>i)
#define ZEROBIT(i,input) ((~(1<<i))&input)
int A = 0x12345678;
int B;
//  A = 0001 0010 0011 0100 0101 0110 0111 1000
int main() {
    
    //swap bits 6 and 7
    // A = 0001 0010 0011 0100 0101 0110 1011 1000
    //A = 0x123456B8
A = ((ZEROBIT(6,A) & ZEROBIT(7,A)) | (GETBIT(7,A)<<6) | GETBIT(6,A)<<7);

printf("%0x",A);
}
