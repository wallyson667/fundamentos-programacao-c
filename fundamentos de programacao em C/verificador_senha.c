#include <stdio.h>

int main()
{
  int senha, m_senha;
  m_senha = 1234;

  while (senha != m_senha)
  {

    printf("\nDigite a senha de quatro digitos: ");
    scanf("%d", &senha);

    if (senha == m_senha)
    {
      printf("Senha correta.\n");
      break;
    }
    else
    {
      printf("Senha incorreta.\n");
    }
  }
}