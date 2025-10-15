/*
Mostrando o endereço e valor dos meu tipos double, char e int
*/

#include <stdio.h>

int main(void)
{
 

 int x = 10;
 double y = 20.5;
 char z = 'a';

 int *pX = &x;
 double *pY = &y;
 char *pZ = &z;

 printf("Endereco de x = %p - Valor de x = %i\n", pX, *pX);
 printf("Endereco de y = %p - Valor de y = %f\n", pY, *pY);
 printf("Endereco de z = %p - Valor de z = %c\n", pZ, *pZ);

 /*
 CONSOLE:
  Endereco de x = 0061FF10 - Valor de x = 10
  Endereco de y = 0061FF08 - Valor de y = 20.500000
  Endereco de z = 0061FF07 - Valor de z = a
 */
 
 return 0;

}