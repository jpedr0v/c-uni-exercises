// Escreva um programa que receba a idade e a altura de várias pessoas, calcule e apresente a média de altura e idade das pessoas. A entrada de dados é encerrada quando for digitado o valor zero para a idade.

#include <stdio.h>

int main() {
    int idade, numPessoas = 0;
    float altura, somaAltura = 0, somaIdade = 0;

    printf ("Informe a idade:\n");
    scanf ("%d", &idade);

    while (idade != 0){
        printf("Informe a altura:\n");
        scanf("%f", &altura);
        numPessoas++;
        somaIdade += idade;
        somaAltura += altura;
        printf("Informe a idade:\n");
        scanf("%d", &idade);
    }

    if (numPessoas > 0){
        printf("A media de idade eh: %.2f\n", somaIdade / numPessoas);
        printf("A media de altura eh: %.2f\n", somaAltura / numPessoas);
    }
    else{
        printf("Nenhum dado foi informado");
    }
    return 0;
}