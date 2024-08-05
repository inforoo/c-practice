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

#include <stdio.h>
void PrintBinByte(unsigned char c);
void PrintBinBytes(unsigned char *bytes, size_t count){
    for (size_t i = 0; i < count; ++i){
        PrintBinByte(bytes[i]);
        bool isLast = i == count - 1;
        if (!isLast) printf(" ");
    }
}

#include <stdio.h>
void PrintBinByte(unsigned char c);
void PrintBinNumber(unsigned char *number, size_t bytesCount){
    for (int i = bytesCount - 1; i >=0; --i){
        PrintBinByte(number[i]);
        bool isLast = i == 0;
        if (!isLast)
        printf(" ");
    }
}
