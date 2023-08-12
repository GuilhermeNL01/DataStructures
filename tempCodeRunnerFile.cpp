#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct cadastro_de_aluno
    {
        char nome[50];
        char disciplina[50];
        float nota_prova1;
        float nota_prova2;
        char matricula[10];
        char email[50];
        float telefone;
    };

    struct professor
    {
        char nome[50];
        char matricula[10];
        char cpf[12];
        char endereco[90];
    };

    struct cadastro_de_aluno aluno;
    struct professor prof;

    printf("\n\n---------------Cadastro de Professor---------------\n\n");
    printf("Nome:\n");
    fgets(prof.nome, sizeof(prof.nome), stdin);
    prof.nome[strlen(prof.nome) - 1] = '\0'; // Remove trailing newline
    printf("Matricula:\n");
    fgets(prof.matricula, sizeof(prof.matricula), stdin);
    prof.matricula[strlen(prof.matricula) - 1] = '\0'; // Remove trailing newline
    printf("CPF:\n");
    fgets(prof.cpf, sizeof(prof.cpf), stdin);
    prof.cpf[strlen(prof.cpf) - 1] = '\0'; // Remove trailing newline
    printf("Endereco:\n");
    fgets(prof.endereco, sizeof(prof.endereco), stdin);
    prof.endereco[strlen(prof.endereco) - 1] = '\0'; // Remove trailing newline

    printf("\n\n---------------Cadastro de Aluno---------------\n\n");
    printf("Nome:\n");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strlen(aluno.nome) - 1] = '\0'; // Remove trailing newline
    printf("Matricula:\n");
    fgets(aluno.matricula, sizeof(aluno.matricula), stdin);
    aluno.matricula[strlen(aluno.matricula) - 1] = '\0'; // Remove trailing newline
    printf("Email:\n");
    fgets(aluno.email, sizeof(aluno.email), stdin);
    aluno.email[strlen(aluno.email) - 1] = '\0'; // Remove trailing newline
    printf("Telefone:\n");
    char telefone_str[50];
    fgets(telefone_str, sizeof(telefone_str), stdin);
    aluno.telefone = strtof(telefone_str, NULL);

    printf("Disciplina:\n");
    fgets(aluno.disciplina, sizeof(aluno.disciplina), stdin);
    aluno.disciplina[strlen(aluno.disciplina) - 1] = '\0'; // Remove trailing newline

    printf("Informe a 1a. nota:\n");
    char nota1_str[50];
    fgets(nota1_str, sizeof(nota1_str), stdin);
    aluno.nota_prova1 = strtof(nota1_str, NULL);

    printf("Informe a 2a. nota:\n");
    char nota2_str[50];
    fgets(nota2_str, sizeof(nota2_str), stdin);
    aluno.nota_prova2 = strtof(nota2_str, NULL);

    printf("\n\n---------------Lendo os dados da struct Aluno---------------\n\n");
    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Disciplina: %s\n", aluno.disciplina);
    printf("Nota prova 1: %.2f\n", aluno.nota_prova1);
    printf("Nota prova 2: %.2f\n", aluno.nota_prova2);
    printf("Matricula do aluno: %s\n", aluno.matricula);
    printf("Email do aluno: %s\n", aluno.email);
    printf("Telefone do aluno: %.2f\n", aluno.telefone);

    printf("\n\n---------------Lendo os dados da struct Professor---------------\n\n");
    printf("Nome do Professor: %s\n", prof.nome);
    printf("CPF: %s\n", prof.cpf);
    printf("Matricula: %s\n", prof.matricula);
    printf("Endereco: %s\n", prof.endereco);

    return 0;
}
