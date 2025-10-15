#include <stdio.h>
#include <locale.h>

int main(void)
{

  setlocale(LC_ALL, "portuguese");

  int i, j;
  float num, med, adcaoMed, maior;
  num = med = adcaoMed = maior = 0;

  i = 1;

  while (i <= 10)
  {
    j = 1;
    med = adcaoMed = 0;

    while (j <= 3)
    {
      printf("\nDIGITE A NOTE: ");
      scanf("%f", &num);

      adcaoMed += num; // soma as notas

      if (j == 3) // 3 disciplinas
      {
        med = adcaoMed / j;
        printf("\n  %d º Aluno \n  Media: %.2f\n", i, med);

        if (med >= maior)
        {
          maior = med;
        }
      }
      j++;
      // if (med >= maior)
      //{
      // maior = med;
      // }
    }
    i++;
  }
  printf("\nMaior media calculada: %.2f\n", maior);
}