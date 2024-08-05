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
