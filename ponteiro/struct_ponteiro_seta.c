/*
Utilizando um novo metodo STRUCT, e 
ponteiro para modificar o valor do meu endereço de memoria
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

  struct horario agora, *depois;

  depois = &agora;

  //Outra forma de utilizar a mesma função de baixo sem precisar 
  //ficar colocando (*pont).var
  
  depois->hora = 20;
  depois->minuto = 20;
  depois->segundo = 20;

  /*
  depois = &agora;
  (*depois).hora = 20;
  (*depois).minuto = 20;
  (*depois).segundo = 20;
  */
  

  printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo);
  
  


  return 0;
}