#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 10
#define MAX_MATRICULA 20
#define MAX_NOME 50

// Estrutura para representar um aluno
struct Aluno {
    char matricula[MAX_MATRICULA];
    char nome[MAX_NOME];
};

int main() {
    // Array de estruturas para armazenar os dados dos alunos
    struct Aluno alunos[MAX_ALUNOS];

    // Loop para inserir dados de 10 alunos
    for (int i = 0; i < MAX_ALUNOS; ++i) {
        printf("Digite a matrícula do aluno: ");
        scanf("%s", alunos[i].matricula);

        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
    }

    // Solicita a matrícula para busca
    char matricula_busca[MAX_MATRICULA];
    printf("Digite a matrícula do aluno que deseja encontrar: ");
    scanf("%s", matricula_busca);

    // Verifica se a matrícula existe no array de alunos
    int encontrado = 0;
    for (int i = 0; i < MAX_ALUNOS; ++i) {
        if (strcmp(alunos[i].matricula, matricula_busca) == 0) {
            printf("O nome do aluno com matrícula %s é %s.\n", matricula_busca, alunos[i].nome);
            encontrado = 1;
            break;
        }
    }

    // Se a matrícula não foi encontrada
    if (!encontrado) {
        printf("Matrícula não encontrada.\n");
    }

    return 0;
}