#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Define a structure to hold student information
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

/// Define a structure to hold professor information
struct professor
{
    char nome[50];
    char matricula[10];
    char cpf[12];
    char endereco[90];
};

int main()
{
    struct cadastro_de_aluno aluno;
    struct professor professor;

    /// Input for professor's information
    printf("\n\n---------------Cadastro de Professor---------------\n\n");
    printf("Nome:\n");
    fgets(professor.nome, 50, stdin);
    printf("Matricula:\n");
    fgets(professor.matricula, 10, stdin);
    printf("CPF:\n");
    fgets(professor.cpf, 12, stdin);
    printf("Endereco:\n");
    fgets(professor.endereco, 90, stdin);

    /// Input for student's information
    printf("\n\n---------------Cadastro de Aluno---------------\n\n");
    printf("Nome:\n");
    fgets(aluno.nome, 50, stdin);
    printf("Matricula:\n");
    fgets(aluno.matricula, 10, stdin);
    printf("Email:\n");
    fgets(aluno.email, 50, stdin);
    printf("Telefone:\n");
    scanf("%f", &aluno.telefone);
    while (getchar() != '\n'); // Clear input buffer
    printf("Disciplina:\n");
    fgets(aluno.disciplina, 50, stdin);
    printf("Informe a 1a. nota:\n");
    scanf("%f", &aluno.nota_prova1);
    printf("Informe a 2a. nota:\n");
    scanf("%f", &aluno.nota_prova2);

    /// Displaying student's and professor's information
    printf("\n\n---------------Lendo os dados da struct Aluno---------------\n\n");
    printf("Nome do aluno: %s", aluno.nome);
    printf("Disciplina: %s", aluno.disciplina);
    printf("Nota prova 1: %.2f\n", aluno.nota_prova1);
    printf("Nota prova 2: %.2f\n", aluno.nota_prova2);
    printf("Matricula do aluno: %s\n", aluno.matricula);
    printf("Email do aluno: %s\n", aluno.email);
    printf("Telefone do aluno: %.2f\n", aluno.telefone);

    printf("\n\n---------------Lendo os dados da struct Professor---------------\n\n");
    printf("Nome do Professor: %s\n",professor.nome);
    printf("CPF:%s\n",professor.cpf);
    printf("Matricula:%s\n",professor.matricula);
    printf("Endereco:%s\n",professor.endereco);

    return 0;
}
