#include <stdio.h>

struct Estudante {
    char nome[100];
    int matricula;
    float notas[3];
};

float calcularMedia(struct Estudante aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    return soma / 3.0;
}

int main() {
    struct Estudante estudantes[100];
    int numEstudantes = 0;

    int opcao;
    do {
        printf("1. Adicionar Estudante\n");
        printf("2. Verificar Aprovação\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Nome: ");
            scanf("%s", estudantes[numEstudantes].nome);
            printf("Matrícula: ");
            scanf("%d", &estudantes[numEstudantes].matricula);
            for (int i = 0; i < 3; i++) {
                printf("Nota %d: ", i+1);
                scanf("%f", &estudantes[numEstudantes].notas[i]);
            }
            numEstudantes++;
        } else if (opcao == 2) {
            int matriculaBusca;
            printf("Matrícula a ser buscada: ");
            scanf("%d", &matriculaBusca);
            int encontrado = 0;
            for (int i = 0; i < numEstudantes; i++) {
                if (matriculaBusca == estudantes[i].matricula) {
                    printf("Estudante encontrado:\nNome: %s, Média: %.2f\n", estudantes[i].nome, calcularMedia(estudantes[i]));
                    if (calcularMedia(estudantes[i]) >= 7.0) {
                        printf("Aprovado.\n");
                    } else {
                        printf("Reprovado.\n");
                    }
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Estudante não encontrado.\n");
            }
        }
    } while (opcao != 3);

    return 0;
}
