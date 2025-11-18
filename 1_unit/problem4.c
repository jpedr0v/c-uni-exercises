// Escreva um programa que receba dois números, calcule e apresente o resultado do primeiro número elevado ao segundo

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Inclusão da biblioteca de matemática para adição da função pow()
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, result;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    result = pow(num1, num2); //Cálculo de um número elevado ao outro utilizando a função pow()

    printf("\n O resultado de %.2f elevado a %.2f eh: %.2f", num1, num2, result);
    
    return (0);
}