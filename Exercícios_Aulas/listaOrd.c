#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um nó da lista
struct No {
    int dado;
    struct No* proximo;
};

// Função para criar um novo nó
struct No* criarNovoNo(int valor) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória para o novo nó.\n");
        exit(1);
    }
    novoNo->dado = valor;
    novoNo->proximo = NULL;
    return novoNo;
}

// Função para inserir um elemento na lista ordenada
void inserirNaListaOrdenada(struct No** cabeca, int valor) {
    struct No* novoNo = criarNovoNo(valor);

    // Caso a lista esteja vazia ou o novo valor seja menor que o primeiro elemento
    if (*cabeca == NULL || valor < (*cabeca)->dado) {
        novoNo->proximo = *cabeca;
        *cabeca = novoNo;
        return;
    }

    struct No* atual = *cabeca;
    while (atual->proximo != NULL && atual->proximo->dado < valor) {
        atual = atual->proximo;
    }
    
    novoNo->proximo = atual->proximo;
    atual->proximo = novoNo;
}

// Função para imprimir a lista
void imprimirLista(struct No* cabeca) {
    struct No* atual = cabeca;
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int main() {
    struct No* lista = NULL;
    
    inserirNaListaOrdenada(&lista, 5);
    inserirNaListaOrdenada(&lista, 3);
    inserirNaListaOrdenada(&lista, 8);
    inserirNaListaOrdenada(&lista, 1);
    inserirNaListaOrdenada(&lista, 7);
    
    printf("Lista ordenada: ");
    imprimirLista(lista);
    
    return 0;
}
