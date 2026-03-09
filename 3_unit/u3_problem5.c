//Construa um programa que receba um número inteiro maior que um e verifique se ele é primo.

#include <stdio.h>

int main() {

    int num, i, qtd = 0;
    printf("Digite um numero: ");
    scanf ("%d", &num);

    if (num < 1) {
        printf("O numero deve ser maior que 1");
        return 0;
    }
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0)
        qtd++;
    }
    if (qtd == 2)
        printf("O numero %d e primo", num);
    else
        printf("O numero %d nao e primo", num);
    return 0;
}