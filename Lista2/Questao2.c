#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para ordenação por bolha
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função auxiliar para o quicksort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Função para o quicksort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

// Função para o mergesort
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal para o mergesort
void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergesort(arr, left, middle);
        mergesort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n], arr_copy[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; // Preenche o array com números aleatórios
        arr_copy[i] = arr[i];   // Copia o array original para comparar os resultados
    }

    clock_t start, end;

    // Mede o tempo de execução do bubbleSort
    start = clock();
    bubbleSort(arr, n);
    end = clock();
    double bubbleTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Mede o tempo de execução do quicksort
    start = clock();
    quicksort(arr_copy, 0, n - 1);
    end = clock();
    double quicksortTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Restaura o array original
    for (int i = 0; i < n; i++) {
        arr_copy[i] = arr[i];
    }

    // Mede o tempo de execução do mergesort
    start = clock();
    mergesort(arr_copy, 0, n - 1);
    end = clock();
    double mergesortTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Tempo de execucao do bubbleSort: %f segundos\n", bubbleTime);
    printf("Tempo de execucao do quicksort: %f segundos\n", quicksortTime);
    printf("Tempo de execucao do mergesort: %f segundos\n", mergesortTime);

    return 0;
}
