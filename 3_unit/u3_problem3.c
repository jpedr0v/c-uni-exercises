//Faça um programa que leia um número inteiro e calcule o seu fatorial.

#include <stdio.h>

int main() {
    int num, i, fatorial;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Fatorial nao existe para numeros negativos");
        return 0;
    }

    fatorial = 1;

    for (i = 1; i <=num; i++)
        fatorial *= i;
    printf("O fatorial eh: %d\n", fatorial);
    
    return 0;
}