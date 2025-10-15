#include <stdio.h>
#include <math.h>

int main()
{
  int numero;

  // Solicitar ao usuário para inserir o valor
  printf("Digite um valor inteiro: ");
  scanf("%d", &numero);

  // Verificar se o valor não é maior que 3 usando o operador de negação
  if (!(numero > 3))
  {
    printf("O valor digitado é: %d\n", numero);
  }

  return 0;
}