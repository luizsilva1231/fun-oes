#include <stdio.h>
#include <time.h>

// Função para calcular a idade em dias, meses e anos
void calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento) {
    // Obtém a data atual
    time_t t = time(NULL);
    struct tm dataAtual = *localtime(&t);

    // Calcula a idade em dias, meses e anos
    int anos = dataAtual.tm_year + 1900 - anoNascimento;
    int meses = dataAtual.tm_mon + 1 - mesNascimento;
    int dias = dataAtual.tm_mday - diaNascimento;

    // Corrige possíveis valores negativos
    if (meses < 0) {
        anos--;
        meses += 12;
    }

    if (dias < 0) {
        meses--;
        dias += 30; // Assume 30 dias em um mês para simplificar
    }

    // Exibe a idade calculada
    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);
}

int main() {
    // Solicita ao usuário que insira a data de nascimento
    int dia, mes, ano;
    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Chama a função para calcular a idade
    calcularIdade(dia, mes, ano);

    return 0;
}