#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
};

int main() {
    struct Livro livros[100];
    int numLivros = 0;

    int opcao;
    do {
        printf("1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Buscar Livro por Autor\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Título: ");
            scanf("%s", livros[numLivros].titulo);
            printf("Autor: ");
            scanf("%s", livros[numLivros].autor);
            printf("Ano de Publicação: ");
            scanf("%d", &livros[numLivros].anoPublicacao);
            numLivros++;
        } else if (opcao == 2) {
            printf("Lista de Livros:\n");
            for (int i = 0; i < numLivros; i++) {
                printf("Título: %s, Autor: %s, Ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].anoPublicacao);
            }
        } else if (opcao == 3) {
            char autorBusca[50];
            printf("Autor a ser buscado: ");
            scanf("%s", autorBusca);
            int encontrados = 0;
            for (int i = 0; i < numLivros; i++) {
                if (strcmp(autorBusca, livros[i].autor) == 0) {
                    printf("Livro encontrado:\nTítulo: %s, Autor: %s, Ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].anoPublicacao);
                    encontrados++;
                }
            }
            if (encontrados == 0) {
                printf("Nenhum livro encontrado para o autor especificado.\n");
            }
        }
    } while (opcao != 4);

    return 0;
}
