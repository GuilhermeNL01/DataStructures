#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        // Se a chave for igual ao elemento do meio, encontra a chave.
        if (arr[meio] == chave)
            return meio;
        
        // Se a chave for maior, descarta a metade esquerda.
        if (arr[meio] < chave)
            inicio = meio + 1;
        
        // Se a chave for menor, descarta a metade direita.
        else
            fim = meio - 1;
    }
    
    // Se a chave não for encontrada, retorna -1.
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int chave = 12;
    int resultado = buscaBinaria(arr, tamanho, chave);
    
    if (resultado != -1)
        printf("A chave %d foi encontrada na posição %d.\n", chave, resultado);
    else
        printf("A chave %d não foi encontrada no array.\n", chave);
    
    return 0;
}
