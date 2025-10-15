/*
Soma entre neus dois ponteiros
*/

#include <stdio.h>

int main(void)
{
 

 int x = 10;
 double y = 20.5;

 int *pX = &x;
 double *pY = &y;

 double soma = *pX + *pY;
 /*Se eu tirar o asterisco e tentar somar vai dar erro, porque nao tem como
 somar o endereço de memeoria, tipo: pX + pY*/

 printf("Valor de *pX + *pY = %.2f\n", soma);

 /*
 CONSOLE:
 Valor de *pX + *pY = 30.50
 */

 
 return 0;

}