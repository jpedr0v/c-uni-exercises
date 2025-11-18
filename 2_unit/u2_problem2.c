// Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor da mensalidade do plano de saúde.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    
    if (idade <= 18) {
        printf("Valor da mensalidade: R$ 50,00\n");
    }
    else if (idade <= 29) {
        printf("Valor da mensalidade: R$ 70,00\n");
    }
    else if (idade <= 45) {
        printf("Valor da mensalidade: R$ 90,00\n");
    }
    else if (idade <= 65) {
        printf("Valor da mensalidade: R$ 130,00\n");
    }
    else {
        printf("Valor da mensalidade: R$ 170,00\n");
    }

    return 0;
}