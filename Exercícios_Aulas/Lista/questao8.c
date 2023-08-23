#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[100];
    float preco;
    int quantidadeEstoque;
};

float comprarProduto(struct Produto *produto, int quantidade) {
    if (quantidade <= produto->quantidadeEstoque) {
        produto->quantidadeEstoque -= quantidade;
        return produto->preco * quantidade;
    } else {
        printf("Estoque insuficiente.\n");
        return 0.0;
    }
}

int main() {
    struct Produto produtos[100];
    int numProdutos = 0;

    int opcao;
    do {
        printf("1. Adicionar Produto\n");
        printf("2. Comprar Produto\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Nome do Produto: ");
            scanf("%s", produtos[numProdutos].nome);
            printf("Preço: ");
            scanf("%f", &produtos[numProdutos].preco);
            printf("Quantidade em Estoque: ");
            scanf("%d", &produtos[numProdutos].quantidadeEstoque);
            numProdutos++;
        } else if (opcao == 2) {
            char nomeProduto[100];
            printf("Nome do Produto a ser comprado: ");
            scanf("%s", nomeProduto);
            int quantidadeCompra;
            printf("Quantidade a ser comprada: ");
            scanf("%d", &quantidadeCompra);
            float total = 0.0;
            for (int i = 0; i < numProdutos; i++) {
                if (strcmp(nomeProduto, produtos[i].nome) == 0) {
                    total = comprarProduto(&produtos[i], quantidadeCompra);
                    break;
                }
            }
            printf("Total da Compra: %.2f\n", total);
        }
    } while (opcao != 3);

    return 0;
}
