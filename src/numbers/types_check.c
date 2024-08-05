#include <stdio.h>

void main(void)
{
  printf("Размеры занимаемые переменными (в байтах).\n");
  printf("float: %lu\n",sizeof(float));
  printf("double: %lu\n",sizeof(double));
  printf("long double: %lu`\n",sizeof(long double));
}
