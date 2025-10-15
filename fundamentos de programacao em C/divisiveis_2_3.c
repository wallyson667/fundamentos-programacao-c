#include <stdio.h>

int main()
{
  int A, B, C, D;

  // Solicitar ao usuário para inserir os valores
  printf("De um espaco apos colocar cada valor.\n");
  printf("Digite quatro valores inteiros (A, B, C, D): ");
  scanf("%d %d %d %d", &A, &B, &C, &D);

  // Verificar e imprimir os valores divisíveis por 2 e 3
  printf("Valores divisíveis por 2 e 3:\n");
  if (A % 2 == 0 && A % 3 == 0)
    printf("%d\n", A);
  if (B % 2 == 0 && B % 3 == 0)
    printf("%d\n", B);
  if (C % 2 == 0 && C % 3 == 0)
    printf("%d\n", C);
  if (D % 2 == 0 && D % 3 == 0)
    printf("%d\n", D);

  return 0;
}