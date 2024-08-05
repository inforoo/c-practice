#include <stdio.h>
void PrintBinByte(unsigned char c);
void PrintBinBytes(unsigned char *bytes, size_t count){
    for (size_t i = 0; i < count; ++i){
        PrintBinByte(bytes[i]);
        bool isLast = i == count - 1;
        if (!isLast) printf(" ");
    }
}
