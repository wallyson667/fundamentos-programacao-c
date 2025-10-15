#include <stdio.h>
#include <math.h>

int main()
{
  int i, valor, rec;
  i = 1;

  printf("\nDigite um numero entre '1' e '10': ");
  scanf("%d", &valor);

  if ((valor <= 10) && (valor >= 1))
  {
    rec = valor;
    while (i <= 10)
    {
      rec = valor * i;
      printf("\n%dx%d=%d", valor, i, rec);
      i++;
    }
  }
  else
  {
    printf("Seu valor nao esta entre 1 e 10.");
  }
  return 0;
}