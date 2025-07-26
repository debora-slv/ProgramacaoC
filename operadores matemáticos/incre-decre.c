#include <stdio.h>

int main(){
    /*
    Incremento (++)
    pré-incremento ++a
    pós-incremento a++
    Decremento (--)
    pré-decremento --a
    pós-decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 + 1
    //numero1 += 1
    //pós-incremento
    //resultado = numero1
    //numero++
    resultado = numero1++;
    //printf("Após incremento: %d\n", numero1);
    printf("Após o pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

     resultado = ++numero1;
    printf("Após o pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //numero1 = numero1 - 1
    //numero1 -= 1
    //numero1--;
    //printf("Após decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após o pós-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após o pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
}
