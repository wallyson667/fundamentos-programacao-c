#include <stdio.h>

int main()
{
  int semana;

  printf("\nInforme apenas o numero da semana: ");
  scanf("%d", &semana);

  switch (semana)
  {
  case 1:
    printf("\nSegunda-feira\n");
    break;

  case 2:
    printf("\nTeça-feira\n");
    break;

  case 3:
    printf("\nQuarta-feira\n");
    break;

  case 4:
    printf("\nQuinta-feira\n");
    break;

  case 5:
    printf("\nsexta-feira\n");
    break;

  case 6:
    printf("\nSabado\n");
    break;

  case 7:
    printf("\nDomingo\n");
    break;

  default:
    printf("\nNumero digitado nao se relaciona ao numero da semana.\n");
    break;
  }
  return 0;
}