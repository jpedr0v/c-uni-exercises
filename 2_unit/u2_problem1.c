// Faça um programa que leia um número e informe se ele é divisível por cinco.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 5 == 0) {
        printf("O numero %d e divisivel por 5", num);
    }
    else {
        printf("O numero informado nao e divisivel por 5");
    }

    return (0);
}