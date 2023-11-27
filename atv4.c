#include <stdio.h>

// Função para imprimir a matriz
void imprimirMatriz(int matriz[61][10]) {
    for (int i = 0; i < 61; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Procedimento para somar individualmente as colunas e armazenar na última linha
void somarColunas(int matriz[61][10]) {
    for (int j = 0; j < 10; ++j) {
        int soma = 0;
        for (int i = 0; i < 61; ++i) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma;
    }
}

int main() {
    // Declaração e inicialização da matriz
    int matriz[61][10];

    // Inicializa a matriz (pode ser feito manualmente ou através de entrada do usuário)

    // Chama o procedimento para somar as colunas e armazenar na última linha
    somarColunas(matriz);

    // Exibe a matriz com as somas na última linha
    printf("Matriz com as somas das colunas na última linha:\n");
    imprimirMatriz(matriz);

    return 0;
}