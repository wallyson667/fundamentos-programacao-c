#include <stdio.h>

int main(void)
{

  int opc, desc = 1;
  float vel = 0, resul = 0;

  printf("\nSIGA AS OPCOES A BAIXO:\n");

  while (desc == 1)
  {

    printf("\nAperte '1' para converter km/h em m/s \nDigite '2' para converter m/s em km/h \nOPC: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
      printf("\nDigite a velocidade em KM/H: ");
      scanf("%f", &vel);
      resul = (vel * 1000) / 3600;
      printf("Km/h convertido por m/s: %.2f\n", resul);
      break;

    case 2:
      printf("\nDigite a velocidade em M/S: ");
      scanf("%f", &vel);
      resul = (vel * 3600) / 1000;
      printf("m/s convertido por km/m: %.2f\n", resul);
      break;

    default:
      printf("Opcao invalida!");
      break;
    }

    printf("\nDESEJA CONTINUAR? \nA perte a tecla '1' para sim e '0' para nao: ");
    scanf("%d", &desc);
  }

  return 0;
}
