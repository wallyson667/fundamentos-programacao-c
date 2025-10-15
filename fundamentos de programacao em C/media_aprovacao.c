#include <stdio.h>

int main()
{
  float n1, n2, n3, med;

  // Solicitar as notas ao usuário
  printf("Primeira avaliacao: ");
  scanf("%f", &n1);

  printf("Segunda avaliacao: ");
  scanf("%f", &n2);

  printf("Terceira avaliacao: ");
  scanf("%f", &n3);

  // Calcular a média
  med = (n1 + n2 + n3) / 3.0;

  // Verificar se o aluno foi aprovado, está em exame ou foi reprovado
  if (med >= 6.0)
  {
    printf("Media: %.2f\nAprovado\n", med);
  }
  else if (med >= 4.0)
  {
    printf("Media: %.2f\nExame\n", med);
  }
  else
  {
    printf("Media: %.2f\nReprovado\n", med);
  }

  return 0;
}