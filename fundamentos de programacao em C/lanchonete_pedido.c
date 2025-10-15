#include <stdio.h>
#include <math.h>

int main()
{

  int ped, quant;
  float total;

  printf("\nBem vindo a lanchonete Hello word.\n");
  printf("\n  Cachorro-quente: R$1,2   COD: 100\n");
  printf("  Bauru-simples:   R$1,3   COD: 101\n");
  printf("  Bauru-ovo:       R$1,5   COD: 102\n");
  printf("  Hamburger:       R$1,2   COD: 103\n");
  printf("  Cheeseburguer:   R$1,3   COD: 104\n");
  printf("  Refrigerante:    R$1,0   COD: 105\n");

  printf("\nInsira o codigo do produto: ");
  scanf("%d", &ped);
  printf("Quantidade de itens do mesmo pedido: ");
  scanf("%d", &quant);

  switch (ped)
  {
  case 100:
    total = 1.2 * quant;
    printf("\nPEDIDO: %d Chacorro-quente por R$%0.2f \n", quant, total);
    break;

  case 101:
    total = 1.3 * quant;
    printf("\n %d Bauru-simples: R$%0.2f \n", quant, total);
    break;

  case 102:
    total = 1.5 * quant;
    printf("\n %d Bauru-ovo: R$%0.2f \n", quant, total);
    break;

  case 103:
    total = 1.2 * quant;
    printf("\n %d Hamburger: R$%0.2f \n", quant, total);
    break;

  case 104:
    total = 1.3 * quant;
    printf("\n %d Cheeseburguer: R$%0.2f \n", quant, total);
    break;

  case 105:
    total = 1 * quant;
    printf("\n %d Refrigerante: R$%0.2f \n", quant, total);
    break;

  default:
    printf("Pedido nao encontrado!");
    break;
  }

  return 0;
}