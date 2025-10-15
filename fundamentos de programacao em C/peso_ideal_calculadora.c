#include <stdio.h>

int main()
{
  float altura, peso_ideal;
  int sexo;

  // Solicitar a altura da pessoa
  printf("Digite a altura da pessoa (em metros): ");
  scanf("%f", &altura);

  // Solicitar o sexo da pessoa
  printf("Digite o sexo da pessoa (1 para feminino, 2 para masculino): ");
  scanf("%d", &sexo);

  // Calcular o peso ideal com base no sexo
  if (sexo == 1)
  {
    // Peso ideal para mulheres
    peso_ideal = 62.1 * altura - 44.7;
  }
  else if (sexo == 2)
  {
    // Peso ideal para homens
    peso_ideal = 72.7 * altura - 58;
  }
  else
  {
    // Se o sexo não for válido
    printf("Sexo invalido. Por favor, insira 1 para feminino ou 2 para masculino.\n");
    return 1; // Encerra o programa com código de erro
  }

  // Imprimir o peso ideal
  printf("O peso ideal para essa pessoa eh: %.2f kg\n", peso_ideal);

  return 0;
}