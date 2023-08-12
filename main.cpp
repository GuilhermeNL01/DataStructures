#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	struct cadastro_de_aluno {
	char nome[50];
	char disciplina [50];
	float nota_prova1 ;
	float nota_prova2 ;
	char matricula[10];
	char email[50];
	float telefone;
	};
	struct professor{
	
	char nome[50];
	char matricula;
	char cpf[11];
	char endereco [90];
	};

	struct cadastro_de_aluno aluno;
	struct professor;
	
	printf("\n\n---------------Cadastro de Professor---------------\n\n");
	printf("Nome:\n");
	fflush(stdin);
	fgets(professor.nome,50,stdin);
	
	printf("Matrícula:\n");
	fflush(stdin);
	fgets(professor.matricula,10,stdin);
	
	printf("CPF:\n");
	fflush(stdin);
	fgets(professor.cpf,11,stdin);
	
	printf("Endereço:\n");
	fflush(stdin);
	fgets(professor.endereco,90,stdin);
	
	printf("\n\n---------------Cadastro de Aluno---------------\n\n");
	printf("Nome:\n");
	fflush(stdin);
	fgets(aluno.nome,50,stdin);
	
	printf("Matrícula:\n");
	fflush(stdin);
	fgets(aluno.matricula,10,stdin);

	printf("Email:\n");
	fflush(stdin);
	fgets(aluno.email,50,stdin);
	
	printf("Telefone:\n");
	scanf("%f",&aluno.telefone);

	
	printf("Disciplina:\n");
	fflush(stdin);
	fgets(aluno.disciplina,50,stdin);
	
	printf("Informe a 1a. nota..:\n");
	scanf("%f",&aluno.nota_prova1);
	
	
	printf("Informe a 2a. nota..:\n");
	scanf("%f", &aluno.nota_prova2);
	
	
	printf("\n\n---------------Lendo os dados da struct...---------------\n\n");
	printf("Nome: %s",aluno.nome);
	printf("Disciplina: %s",aluno.disciplina);
	printf("Nota prova 1: %.2f\n",aluno.nota_prova1);
	printf("Nota prova 2: %.2f\n",aluno.nota_prova2);
	printf("Matrícula %.2f\n",aluno.matricula);
	printf("email: %.2f\n",aluno.email);
	printf("Telefone %.2f\n",aluno.telefone);

	
		return 0;
	};


