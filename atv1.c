#include <stdio.h>

// Função para imprimir as opções, solicitar a opção desejada e retornar a opção escolhida
int mostrarOpcoes() {
    int opcao;
    printf("Escolha uma opção de pagamento:\n");
    printf("1) A vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$ 100,00)\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

// Função para calcular o valor total das prestações com desconto à vista
float opcaoAVista(float total) {
    return total - (total * 0.10);
}

// Função para calcular o valor total das prestações em duas vezes
float opcaoDuasVezes(float total) {
    return total / 2;
}

// Função para calcular o valor total das prestações em parcelas de 3 a 10 vezes com juros
float opcaoParcelas(float total) {
    return total * 1.03; // 3% de juros
}

int main() {
    float totalGasto;
    int opcao;

    // Solicita ao usuário que insira o total gasto
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    // Chama a função para mostrar opções e obter a escolha do usuário
    opcao = mostrarOpcoes();

    // Testa a opção escolhida e ativa a função correspondente
    switch (opcao) {
        case 1:
            printf("Valor total das prestações com desconto à vista: R$ %.2f\n", opcaoAVista(totalGasto));
            break;
        case 2:
            printf("Valor total das prestações em duas vezes: R$ %.2f\n", opcaoDuasVezes(totalGasto));
            break;
        case 3:
            if (totalGasto > 100.00) {
                printf("Valor total das prestações em parcelas de 3 a 10 vezes com juros: R$ %.2f\n", opcaoParcelas(totalGasto));
            } else {
                printf("Opção indisponível para compras abaixo de R$ 100,00.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}