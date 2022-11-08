#include "stdio.h"

int main(int argc, char** argv) {
  float nota1;
  float nota2;
  float media;

  printf("Insira a nota 1: \n");
  scanf("%f", &nota1);

  printf("Insira a nota 2: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("Sua media foi = %f", media);

  return 0;
}