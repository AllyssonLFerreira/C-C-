#include "stdio.h"

int main(int argc, char** argv) {
  int i;

  do{
    printf("\n Digite o numero do sabor desejado? \n");

    printf("\t (1)... flocos \n");
    printf("\t (2)... napolitano \n");
    printf("\t (3)... chocolate \n");
    printf("\t (4)... morango \n");
    printf("\t (5)... coco \n");

    scanf("%d", &i);
  } while ((i<1) || (i>5));
  
  switch (i) {
    case 1:
      printf("\t \t Voce escolheu flocos");
    break;
    case 2:
      printf("\t \t Voce escolheu napolitano");
    break;
    case 3:
      printf("\t \t Voce escolheu chocolate");
    break;
    case 4:
      printf("\t \t Voce escolheu morango");
    break;
    case 5:
      printf("\t \t Voce escolheu coco");
    break;
  }

  return 0;
}