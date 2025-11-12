#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float numero;
    printf("Digite um número inteiro: \n");
    scanf("%f", &numero);
    if(numero > 10){
        printf("Valor maior que 10.\n");
    }
}