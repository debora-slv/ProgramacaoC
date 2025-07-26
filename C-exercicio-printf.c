#include <stdio.h>
int main(){
    int idade = 26;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'B';
    char nome[20] = "Bruno";

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do nome: %c\n", inicial);
    printf("nome: %s\n", nome);

    return 0;

    //%.2f formata e exibe o valor com um número de ponto flutuante com duas casas decimais.