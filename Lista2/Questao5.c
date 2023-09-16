#include <stdio.h>

// Função de ordenação por inserção
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elementos da matriz[0..i-1] que são maiores que key
        // para uma posição à frente de sua posição atual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int m, n;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    int matriz[m][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Aplica o algoritmo de ordenação por inserção a cada linha da matriz
    for (int i = 0; i < m; i++) {
        insertionSort(matriz[i], n);
    }

    // Imprime a matriz ordenada
    printf("Matriz ordenada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
