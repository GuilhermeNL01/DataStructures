#include <stdio.h>

// Função para buscar um valor em uma matriz bidimensional
void buscaSequencial(int matriz[][100], int linhas, int colunas, int valor) {
    int encontrou = 0; // Variável para indicar se o valor foi encontrado
    int linhaEncontrada = -1;
    int colunaEncontrada = -1;

    // Percorre a matriz para buscar o valor
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                encontrou = 1; // Valor encontrado
                linhaEncontrada = i;
                colunaEncontrada = j;
                break; // Saímos do loop assim que encontramos o valor
            }
        }
        if (encontrou) {
            break; // Saímos do loop externo se o valor foi encontrado
        }
    }

    if (encontrou) {
        printf("O valor %d foi encontrado na posição (%d, %d).\n", valor, linhaEncontrada, colunaEncontrada);
    } else {
        printf("O valor %d não foi encontrado na matriz.\n", valor);
    }
}

int main() {
    int m, n;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    int matriz[m][100]; // Assumindo no máximo 100 colunas

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int valorBuscado;
    printf("Digite o valor que deseja encontrar na matriz: ");
    scanf("%d", &valorBuscado);

    buscaSequencial(matriz, m, n, valorBuscado);

    return 0;
}
