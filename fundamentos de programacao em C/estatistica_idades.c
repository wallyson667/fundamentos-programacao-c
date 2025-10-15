#include <stdio.h>
#include <math.h>

int main()
{
  int idade, menorIda = 0, maiorIda = 0, somaIda = 0, cont = 0;
  float media = 0;

  printf("\nDigite ZERO para finalizar o programa.\n");

  while (1)
  {

    printf("\nIdade: ");
    scanf("%d", &idade);

    if (idade == 0)
    {
      break;
    }

    if (cont == 0)
    {
      menorIda = idade;
      maiorIda = idade;
    }

    somaIda = somaIda + idade;

    if (idade >= maiorIda)
    {
      maiorIda = idade;
    }

    if (idade <= menorIda)
    {
      menorIda = idade;
    }

    cont++;
  }

  media = (float)somaIda / cont;
  printf("\nMaior idade: %d", maiorIda);
  printf("\nMenor idade: %d", menorIda);
  printf("\nA media entre as idades eh: %.2f\n", media);
}