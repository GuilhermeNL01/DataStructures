#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Filme
struct Filme {
    char titulo[100];
    int classificacao;
    char diretor[100];
    char genero[50];
    char duracao[20];
};

// Função para preencher os dados de um Filme
void preencherFilme(struct Filme *filme, const char *titulo, int classificacao, const char *diretor, const char *genero, const char *duracao) {
    strcpy(filme->titulo, titulo);
    filme->classificacao = classificacao;
    strcpy(filme->diretor, diretor);
    strcpy(filme->genero, genero);
    strcpy(filme->duracao, duracao);
}

// Função para exibir os dados de um Filme
void exibirFilme(const struct Filme *filme) {
    printf("Título: %s\n", filme->titulo);
    printf("Classificação: %d\n", filme->classificacao);
    printf("Diretor: %s\n", filme->diretor);
    printf("Gênero: %s\n", filme->genero);
    printf("Duração: %s\n", filme->duracao);
}

int main() {
    // Criando um objeto Filme
    struct Filme meuFilme;
    
    // Preenchendo os dados do filme usando a função e ponteiros
    preencherFilme(&meuFilme, "Matrix", 14, "Lana Wachowski", "Ficção Científica", "2h 16min");
    
    // Exibindo os dados do filme
    exibirFilme(&meuFilme);

    return 0;
}
