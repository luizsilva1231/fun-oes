#include <stdio.h>

// Procedimento para calcular a quantidade de locações gratuitas
void calcularLocacoesGratuitas(const int filmesRetirados[], int locacoesGratuitas[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        // Calcula a quantidade de locações gratuitas para cada cliente
        locacoesGratuitas[i] = filmesRetirados[i] / 15;
    }
}

int main() {
    // Tamanho do vetor
    const int tamanho = 500;

    // Vetor que armazena a quantidade de filmes retirados por cada cliente
    int filmesRetirados[tamanho];

    // Vetor para armazenar a quantidade de locações gratuitas para cada cliente
    int locacoesGratuitas[tamanho];

    // Preenche o vetor de filmes retirados (pode ser feito manualmente ou através de entrada do usuário)

    // Chama o procedimento para calcular a quantidade de locações gratuitas
    calcularLocacoesGratuitas(filmesRetirados, locacoesGratuitas, tamanho);

    // Exibe a quantidade de locações gratuitas para cada cliente
    printf("Quantidade de locações gratuitas para cada cliente:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Cliente %d: %d locações gratuitas\n", i + 1, locacoesGratuitas[i]);
    }

    return 0;
}