#include <stdio.h>
#include "calculadora.h"

int main()
{
  char operator;
  float num1, num2, result;

  // Solicitando a operação ao usuário
  printf("Digite uma operacao (+, -, *, /): ");
  scanf(" %c", &operator);

  // Solicitando os números ao usuário
  printf("Digite um numero: ");
  scanf("%f", &num1);

  printf("Digite um numero: ");
  scanf("%f", &num2);

  // Escolhendo a operação com base no operador fornecido
  switch (operator)
  {
  case '+':
    result = add(num1, num2);
    break;
  case '-':
    result = subtract(num1, num2);
    break;
  case '*':
    result = multiply(num1, num2);
    break;
  case '/':
    result = divide(num1, num2);
    break;
  default:
    printf("Operador invalido!\n");
    return 1;
  }

  // Imprimindo o resultado
  printf("Resultado: %.2f\n", result);

  return 0;
}
