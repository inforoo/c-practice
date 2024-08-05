#include <stdio.h>
void PrintBinByte(unsigned char c);
void PrintBinBytes(unsigned char *bytes, size_t count){
    for (size_t i = 0; i < count; ++i){
        PrintBinByte(bytes[i]); 


	i=0,1,2,3

	bytes - pointer of unsigned char type, начиная с адреса памяти на 
	который указывает bytes следующие 8 бит - беззнаковый char.
	bytes[0] bytes 
	bytes[1] bytes+(sizeof unsigned char)
	bytes[2] bytes+2*(sizeof unsigned char)

	arr[0]
	arr[1]



        bool isLast = i == count - 1;
        if (!isLast) printf(" ");
    }
}
