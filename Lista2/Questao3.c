#include <stdio.h>

void insertionSortDescending(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elementos maiores para a esquerda
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Chama a função de ordenação decrescente
    insertionSortDescending(arr, n);

    printf("Array ordenado em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
