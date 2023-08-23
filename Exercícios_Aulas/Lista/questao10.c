#include <stdio.h>

struct Moeda {
    float valorDolar;
    float valorEuro;
};

float converterDolarParaEuro(float valorDolar, float taxaCambio) {
    return valorDolar * taxaCambio;
}

float converterEuroParaDolar(float valorEuro, float taxaCambio) {
    return valorEuro / taxaCambio;
}

int main() {
    struct Moeda moeda;
    moeda.valorDolar = 1.0; // 1 dólar
    moeda.valorEuro = 0.85; // 1 euro

    float taxaCambio;
    printf("Informe a taxa de câmbio (valor de 1 dólar em euros): ");
    scanf("%f", &taxaCambio);

    int opcao;
    do {
        printf("1. Converter Dólar para Euro\n");
        printf("2. Converter Euro para Dólar\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        float valor;
        if (opcao == 1) {
            printf("Valor em Dólar: ");
            scanf("%f", &valor);
            printf("Valor em Euro: %.2f\n", converterDolarParaEuro(valor, taxaCambio));
        } else if (opcao == 2) {
            printf("Valor em Euro: ");
            scanf("%f", &valor);
            printf("Valor em Dólar: %.2f\n", converterEuroParaDolar(valor, taxaCambio));
        }
    } while (opcao != 3);

    return 0;
}
