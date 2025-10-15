#include <stdio.h>

int main()
{
  int numero, resultado;

  // Solicitar ao usuário para inserir o número inteiro
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  // Multiplicar o número por dois
  resultado = numero * 2;

  // Verificar se o resultado é maior que 30 e apresentar o resultado
  if (resultado > 30)
  {
    printf("O resultado da multiplicacao por dois e: %d\n", resultado);
  }

  return 0;
}