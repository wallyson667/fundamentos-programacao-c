#include <stdio.h>
#include <math.h>

int main()
{
  int n, y, x, maior;

  printf("\nPrimeiro numero: ");
  scanf("%d", &n);

  printf("Primeiro segundo: ");
  scanf("%d", &y);

  printf("Primeiro terceiro: ");
  scanf("%d", &x);

  maior = y;

  if (n >= maior)
  {
    maior = n;
  }
  else if (x > maior)
  {
    maior = x;
  }

  printf("\nO maior numero eh:%d \n", maior);

  return 0;
}