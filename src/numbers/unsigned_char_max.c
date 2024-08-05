#include <stdio.h>
#include <limits.h>

int main()
{
  printf("unsigned char size: %lu\n", sizeof(unsigned char));
  
  unsigned char a = ~0; // все биты a равны 1
  printf("unsigned char max value: %d\n", a);
  printf("unsigned char max: %d\n", UCHAR_MAX);
  printf("char bit count: %d\n", CHAR_BIT);
}
