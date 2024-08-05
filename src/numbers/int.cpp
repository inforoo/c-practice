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
#include <stdlib.h>
void PrintBinBytes(unsigned char *bytes, size_t count);
int main(int argc, char *argv[]){
    if (argc != 2){
        printf("Использование:\n %s number.\n", argv[0]);
        return -1;
    }
    int number = atoi(argv[1]);
    printf("Исходное число: %d\n", number);
    printf("Представление в памяти: ");
    PrintBinBytes((unsigned char *)&number, sizeof(number));
    printf("\n");
    return 0;
}
