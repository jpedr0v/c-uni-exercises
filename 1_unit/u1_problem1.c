// Escreva um programa que leia um número inteiro e apresente seu antecessor e seu sucessor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, ant, suc;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num); // Lê um decimal por questão de segurança (%d) e armazena no endereço de memória (&) da variável 'num'

    ant = num - 1;
    suc = num + 1;

    printf("\n O antecessor: %d", ant);
    printf("\n O sucessor: %d", suc);
    return (0);
}