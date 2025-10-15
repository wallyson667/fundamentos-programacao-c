/*
Fazendo a modificação do valor de x utilizando meu ponteiro:
*/

#include <stdio.h>

int main(void)
{

  int x = 10;
  int *ponteiro; // Criação do meu ponteiro

  ponteiro = &x; // Ponteiro recebe o endereço de memoria de x

  int y = 20;
  *ponteiro = y; // Ponteiro modifica o valor de x

  printf("\n ponteiro: %d", ponteiro);   // Ele imprime o endereço para onde está apontando
  printf("\n *ponteiro: %i", *ponteiro); // Ele imprime o valor do endereço de x
  printf("\n x: %d", x);                 // "x" retorna o novo valor que foi modificado por meu ponteiro
  printf("\n x: %d", &x);                 // "x" retorna o novo valor que foi modificado por meu ponteiro
  /*
  CONSOLE:
  ponteiro: 0061FF14
  *ponteiro: 20
  x: 20

  */
}