#include <stdio.h>

int main(void)
{

  int num, i, dv, j, primo = 0, impar = 0, par = 0;

  dv = 0;
  j = 1;
  i = 1;

  while (j <= 10)
  {

    dv = 0;
    i = 1;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
      printf("\nPar: %d", num);
      par++;
    }
    else
    {
      printf("\nimpar: %d", num);
      impar++;
    }

    while (i <= num)
    {
      if (num % i == 0)
      {
        dv++;
      }
      i++;
    }

    if (dv == 2)
    {
      printf("\nEh primo: %d\n", num);
      primo++;
    }
    else
    {
      printf("\nnao eh primo: %d\n", num);
    }

    j++;
  }
  printf("\nA quantida de numero primos: %d\n", primo);
  printf("A quantida de numero par: %d\n", par);
  printf("A quantida de numero impar: %d\n", impar);

  return 0;
}