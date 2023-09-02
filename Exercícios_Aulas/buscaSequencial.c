#include <stdio.h>

// Função para realizar a busca sequencial
int buscaSequencial(int arr[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == chave) {
            return i; // Retorna o índice onde a chave foi encontrada
        }
    }
    return -1; // Retorna -1 se a chave não for encontrada
}

int main() {
    int tamanho, chave;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Digite o número que deseja buscar: ");
    scanf("%d", &chave);

    int resultado = buscaSequencial(arr, tamanho, chave);

    if (resultado != -1) {
        printf("O número %d foi encontrado no índice %d.\n", chave, resultado);
    } else {
        printf("O número %d não foi encontrado no array.\n", chave);
    }

    return 0;
}
