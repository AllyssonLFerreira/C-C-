#include "stdio.h"

int main(int argc, char** argv) {
  
  int contador;

  printf("\n Digite um numero:");
  scanf("%d", &contador);

  for(contador; contador>=1; contador--)
  {
    printf("%d ", contador);
  }

  return 0;
}