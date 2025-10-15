#include <stdio.h>

int main()
{
  float lado1, lado2, lado3;

  // Entrada dos lados do triÃ¢ngulo
  printf("Digite o comprimento do primeiro lado do triangulo: ");
  scanf("%f", &lado1);
  printf("Digite o comprimento do segundo lado do triangulo: ");
  scanf("%f", &lado2);
  printf("Digite o comprimento do terceiro lado do triangulo: ");
  scanf("%f", &lado3);

  // VerificaÃ§Ã£o da existÃªncia do triÃ¢ngulo
  if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1))
  {
    // VerificaÃ§Ã£o do tipo de triÃ¢ngulo
    if (lado1 == lado2 && lado2 == lado3)
      printf("O triÃ¢ngulo Ã© equilÃ¡tero.\n");
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
      printf("O triÃ¢ngulo Ã© isÃ³sceles.\n");
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
      printf("O triÃ¢ngulo Ã© escaleno.\n");
    }
  }
  else
  {
    printf("NÃ£o Ã© um triÃ¢ngulo.\n");
  }

  return 0;
}