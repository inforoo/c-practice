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
