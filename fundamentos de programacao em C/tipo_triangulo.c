#include <stdio.h>

int main()
{
  float l1, l2, l3;

  // Entrada dos lados do triÃ¢ngulo
  printf("Primeiro lado: ");
  scanf("%f", &l1);
  printf("Segundo lado: ");
  scanf("%f", &l2);
  printf("Terceiro lado: ");
  scanf("%f", &l3);

  // VerificaÃ§Ã£o da existÃªncia do triÃ¢ngulo
  if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
  {
    // VerificaÃ§Ã£o do tipo de triÃ¢ngulo
    if (l1 == l2 && l2 == l3)
      printf("Equilatero.\n");
    else if (l1 == l2 || l1 == l3 || l2 == l3)
      printf("Isosceles.\n");
    else
      printf("Escaleno.\n");
  }
  else
  {
    printf("Nao eh triangulo.\n");
  }

  return 0;
}