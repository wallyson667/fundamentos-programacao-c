#include <stdio.h>

// Definição da estrutura Eletrodomestico
struct Eletrodomestico {
    char nome[50];
    float potencia;  // Potência em kW
    float tempoAtivo;  // Tempo ativo por dia em horas
};

int main() {
    struct Eletrodomestico eletro[5];
    float consumoTotal = 0;
    int dias;
    int i;

    // Leitura dos dados de 5 eletrodomésticos
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do eletrodoméstico %d: ", i + 1);
        scanf("%s", eletro[i].nome);  // Leitura do nome

        printf("Digite a potência (kW) do eletrodoméstico %d: ", i + 1);
        scanf("%f", &eletro[i].potencia);  // Leitura da potência

        printf("Digite o tempo ativo por dia (horas) do eletrodoméstico %d: ", i + 1);
        scanf("%f", &eletro[i].tempoAtivo);  // Leitura do tempo ativo

        printf("\n");
    }

    // Leitura do número de dias
    printf("Digite o período de tempo (em dias): ");
    scanf("%d", &dias);

    // Cálculo do consumo total
    for (i = 0; i < 5; i++) {
        consumoTotal += eletro[i].potencia * eletro[i].tempoAtivo * dias;
    }

    // Impressão do consumo total e do consumo relativo de cada eletrodoméstico
    printf("\nConsumo total na casa: %.2f kWh\n", consumoTotal);
    printf("Consumo relativo de cada eletrodoméstico:\n");

    for (i = 0; i < 5; i++) {
        float consumoRelativo = (eletro[i].potencia * eletro[i].tempoAtivo * dias) / consumoTotal * 100;
        printf("%s: %.2f%%\n", eletro[i].nome, consumoRelativo);
    }

    return 0;
}
