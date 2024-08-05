#include <stdio.h>
#include <limits.h>
void PrintBinNumber(unsigned char *bytes, size_t count);
void PrintBinBytes(unsigned char *bytes, size_t count);
int main(){ 
    unsigned int a = 0;
    a = ~a; // все биты a равны 1
    printf("unsigned int max value: %u\n", a);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("unsigned int bit count: %lu\n",CHAR_BIT * sizeof(unsigned int));
    unsigned int b = 270;
    printf("%u двоичное представление: \n", b);
    PrintBinNumber((unsigned char *)&b, sizeof(b));
    printf("\n");
    printf("%u в памяти: \n", b);
    PrintBinBytes((unsigned char *)&b, sizeof(b));
}
