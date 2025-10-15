
#include <stdio.h>

int main(void)
{

  void testePonteiro(int *pX);

  int teste = 1;
  // Estou acessando o valor da minha variavel teste
  int *pTeste = &teste;

  testePonteiro(pTeste);

  printf("%i\n", teste);

  printf("ENDERECO: \n");

  // Endereço da minha variavel
  printf("\n  Memoria da variavel teste: %p\n", &teste);
  // Endereço para onde meu ponteiro está apontando
  printf("  Memoria que meu ponteiro esta apontando: %p\n", pTeste);
  printf("\n");

  printf("VALOR DA VARIAVEL\n");

  printf("\n  Valor da variavel teste: %i\n", teste);
  printf("  Valor que meu ponteiro esta apontando: %i\n", *pTeste);

  return 0;
}
/*
Nessa linha estou dizendo: pegue o endereço que está na memoria do PC e adicione 5.
Aqui podemos ir direto na fonte
*/
void testePonteiro(int *pX)
{
  *pX += 5;

  printf("\n");
  printf("\nValor que pX recebe: %i \n", *pX);
}
