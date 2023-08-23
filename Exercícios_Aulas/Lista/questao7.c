#include <stdio.h>

struct ContaBancaria {
    char nomeTitular[100];
    int numeroConta;
    float saldo;
};

void depositar(struct ContaBancaria *conta, float valor) {
    conta->saldo += valor;
    printf("Depósito realizado. Saldo atual: %.2f\n", conta->saldo);
}

void sacar(struct ContaBancaria *conta, float valor) {
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque realizado. Saldo atual: %.2f\n", conta->saldo);
    } else {
        printf("Saldo insuficiente.\n");
    }
}

void verificarSaldo(struct ContaBancaria conta) {
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main() {
    struct ContaBancaria conta;
    strcpy(conta.nomeTitular, "João");
    conta.numeroConta = 12345;
    conta.saldo = 1000.0;

    int opcao;
    do {
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            float valor;
            printf("Valor a ser depositado: ");
            scanf("%f", &valor);
            depositar(&conta, valor);
        } else if (opcao == 2) {
            float valor;
            printf("Valor a ser sacado: ");
            scanf("%f", &valor);
            sacar(&conta, valor);
        } else if (opcao == 3) {
            verificarSaldo(conta);
        }
    } while (opcao != 4);

    return 0;
}
