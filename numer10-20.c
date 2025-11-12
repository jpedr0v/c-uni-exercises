#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float num;
    printf("Digite um número: \n");
    scanf("%f", &num);
    if(num > 10 && num < 20){
        printf("Valor entre 10 e 20");
    }
}