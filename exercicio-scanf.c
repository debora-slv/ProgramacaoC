#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    // sintaxe scanf

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao); //dar espaço antes de %c para ignorar o caractere de nova linha pendente.
    printf("A opção é: %c\n", opcao);

}