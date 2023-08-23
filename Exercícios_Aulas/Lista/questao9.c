#include <stdio.h>
#include <string.h>
#include <time.h>

struct Funcionario {
    char nome[100];
    char cargo[50];
    float salario;
    time_t dataAdmissao;
};

void darAumento(struct Funcionario *funcionario, float percentual) {
    funcionario->salario += funcionario->salario * (percentual / 100);
    printf("Aumento aplicado. Novo salário: %.2f\n", funcionario->salario);
}

double calcularTempoNaEmpresa(struct Funcionario funcionario) {
    time_t agora;
    time(&agora);
    double segundos = difftime(agora, funcionario.dataAdmissao);
    return segundos / (60 * 60 * 24 * 365.25);
}

int main() {
    struct Funcionario funcionario;
    strcpy(funcionario.nome, "João");
    strcpy(funcionario.cargo, "Programador");
    funcionario.salario = 5000.0;
    funcionario.dataAdmissao = time(NULL) - (3 * 365 * 24 * 60 * 60); // Admitido há 3 anos

    printf("Tempo na Empresa: %.2f anos\n", calcularTempoNaEmpresa(funcionario));

    darAumento(&funcionario, 10.0); // Aumento de 10%
    
    return 0;
}
