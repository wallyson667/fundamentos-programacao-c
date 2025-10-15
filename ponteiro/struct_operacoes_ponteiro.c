/*
Utilizando um novo metodo STRUCT, e 
ponteiro para modificar o valor do meu endereço de memoria

Utilizando operações:
*/

#include <stdio.h>
int main(void)
{

struct horario
{
  int hora;
  int minuto;
  int segundo;
};

  //O ponteiro acessa o endereço de (agora) e pode tanto alterar como acrescentar um valor. 
  struct horario agora, *depois;

  depois = &agora;

  depois->hora = 20;
  depois->minuto = 80;
  depois->segundo = 50;

  int somatorio = 100;

  struct horario antes;

  antes.hora = somatorio + depois->segundo; // 150
  antes.minuto = agora.hora + depois->minuto; // 100
  antes.segundo = depois->minuto + depois->segundo; // 130
  

  printf("\n%i:%i:%i", antes.hora, antes.minuto, antes.segundo);



 
  
  
  //OBS: "agora.hora" e "depois->hora" sao iguais:
  printf("\n");
  printf("\n");
  printf("%i = %i  ? ", agora.hora, depois->hora);
  return 0;
}