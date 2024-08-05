#include <stdio.h>
#include <limits.h>
void PrintBinByte(unsigned char c){
  unsigned char highBit = 1 << (CHAR_BIT - 1);
  // 128 = 2^7 = (10000000)
  for (int i = 0; i < CHAR_BIT; ++i){ 
    bool isSet = (c & highBit) != 0;
    printf("%d", isSet ? 1 : 0);
    c <<= 1;
  }
  printf("\n");
}
