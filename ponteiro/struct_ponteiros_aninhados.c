#include <stdio.h>

int main(void)
{

  struct horario
  {
    int *pHora;
    int *pMinuto;
    int *pSegundo;
  };

  struct horario hoje;

  int hora = 1;
  int minuto = 20;
  int segundo = 40;

  // Acessando o membro ponteiro de uma estrutura
  hoje.pHora = &hora;
  hoje.pMinuto = &minuto;
  hoje.pSegundo = &segundo;

  // Acessando o valor para onde meu ponteiro está apontando
  printf(" Hora - %i \n", *hoje.pHora);
  printf(" Minutos - %i \n", *hoje.pMinuto);
  printf(" Segundo - %i \n", *hoje.pSegundo);

  *hoje.pSegundo = 100;

  printf("\n");
  // Alterando o valor do ponteiro segundo
  printf(" Segundo - %i \n", *hoje.pSegundo);

  return 0;
}
