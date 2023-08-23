#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    struct Contato contatos[100];
    int numContatos = 0;

    int opcao;
    do {
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Buscar Contato\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Nome: ");
            scanf("%s", contatos[numContatos].nome);
            printf("Telefone: ");
            scanf("%s", contatos[numContatos].telefone);
            numContatos++;
        } else if (opcao == 2) {
            printf("Lista de Contatos:\n");
            for (int i = 0; i < numContatos; i++) {
                printf("Nome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
            }
        } else if (opcao == 3) {
            char nomeBusca[50];
            printf("Nome a ser buscado: ");
            scanf("%s", nomeBusca);
            int encontrado = 0;
            for (int i = 0; i < numContatos; i++) {
                if (strcmp(nomeBusca, contatos[i].nome) == 0) {
                    printf("Contato encontrado:\nNome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Contato não encontrado.\n");
            }
        }
    } while (opcao != 4);

    return 0;
}
