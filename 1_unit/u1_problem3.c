// Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float deposito, juros, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros em porcentagem: ");
    scanf("%f", &juros);

    rendimento = deposito * (juros / 100);
    total = deposito + rendimento;

    printf("O valor do rendimento eh: %.2f", rendimento);
    printf("O valor total eh: %.2f", total);
    
    return (0);
}