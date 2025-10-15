#include <stdio.h>

int main()
{
  int n1, n2, i;
  int somPar = 0;
  int multImpar = 1;

  // Solicita os dois números ao usuário
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  // Garante que num1 seja menor ou igual a num2
  if (n1 > n2)
  {
    int y = n1;
    n1 = n2;
    n2 = y;
  }

  // Loop através do intervalo de num1 a num2
  i = n1;
  while (i <= n2)
  {
    // Verifica se o número é par
    if (i % 2 == 0)
    {
      somPar += i;
    }
    else
    {
      // Verifica se o número é ímpar
      multImpar *= i;
    }
    i++;
  }

  // Mostra os resultados
  printf("A soma dos numeros numeros par no intervalo entre %d e %d eh: %d\n", n1, n2, somPar);
  printf("A multiplicacao dos numeros impares entre o intervalo entre %d e %d eh: %d\n", n1, n2, multImpar);

  return 0;
}