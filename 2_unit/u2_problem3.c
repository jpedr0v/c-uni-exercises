// Construa um programa que receba a idade de uma pessoa e identifique sua classe eleitoral: não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e 65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Classe eleitoral: Nao eleitor");
    }
    else if (idade < 18 || idade > 65) {
        printf("Classe eleitoral: Eleitor facultativo");
    }
    else {
        printf("Classe eleitoral: Eleitor obrigatorio");
    }

    return 0;
}