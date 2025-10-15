#include <stdio.h>

int main()
{
  float valor_emprestimo, salario, valor_parcelas;
  int num_parcelas;

  // Solicitar as informações ao usuário
  printf("Digite o valor do emprestimo: R$");
  scanf("%f", &valor_emprestimo);

  printf("Digite o numero de parcelas: ");
  scanf("%d", &num_parcelas);

  printf("Digite o salario do solicitante: R$");
  scanf("%f", &salario);

  // Calcular o valor das parcelas
  valor_parcelas = valor_emprestimo / num_parcelas;

  // Verificar se o valor das parcelas representa no máximo 30% do salário do solicitante
  if (valor_parcelas <= salario * 0.30)
  {
    printf("Emprestimo aprovado!\n");
  }
  else
  {
    printf("Emprestimo nao aprovado. O valor das parcelas excede 30%% do salario do solicitante.\n");
  }

  return 0;
}