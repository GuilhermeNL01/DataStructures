#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;

    // Preenchendo os campos da struct
    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 25;
    pessoa1.altura = 1.75;

    // Imprimindo os valores
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

    return 0;
}
