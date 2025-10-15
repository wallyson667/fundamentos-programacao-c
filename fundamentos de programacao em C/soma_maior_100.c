#include <stdio.h>

int main()
{
  int A, B, C, soma;

  // Solicitar ao usuário para inserir os valores inteiros
  printf("Digite tres valores inteiros (A, B, C): ");
  scanf("%d %d %d", &A, &B, &C);

  // Calcular a soma dos valores
  soma = A + B + C;

  // Verificar se a soma é maior ou igual a 100 e apresentar o resultado
  if (soma >= 100)
  {
    printf("A soma dos valores e: %d\n", soma);
  }

  return 0;
}