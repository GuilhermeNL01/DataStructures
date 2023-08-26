#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os caracteres
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char conjunto[100];
    
    printf("Digite o conjunto de caracteres: ");
    fgets(conjunto, sizeof(conjunto), stdin);
    conjunto[strcspn(conjunto, "\n")] = '\0'; // Remover o caractere de nova linha
    
    int tamanho = strlen(conjunto);
    
    bubbleSort(conjunto, tamanho);
    
    printf("Conjunto ordenado: %s\n", conjunto);
    
    return 0;
}
