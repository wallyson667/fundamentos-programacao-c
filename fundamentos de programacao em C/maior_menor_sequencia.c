#include <stdio.h>

int main(void)
{
  int num, maior, menor, i;
  i = 1;

  printf("\nDigite um numero: ");
  scanf("%d", &num);

  while (num >= 0)
  {
    if (i == 1)
    {
      maior = num;
      menor = num;
    }

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num >= maior)
    {
      maior = num;
    }
    if ((num < menor) && (num >= 0))
    {
      menor = num;
    }
    i++;
  }
  printf("Menor: %d", menor);
  printf("\nMaior: %d", maior);

  return 0;
}