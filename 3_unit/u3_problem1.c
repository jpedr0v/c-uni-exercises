//O problema consiste em ler um conjunto de números inteiros e contar a quantidade de números pares e ímpares. A leitura deve ser realizada até que seja lido o valor zero.
//While

#include <stdio.h>

int main() {
    int num, impar, par;
    par = 0;
    impar = 0;
    printf("Informe um numero: ");
    scanf("%d", &num);
    while (num != 0){
        if (num % 2 == 0){
            par++;
        }
        else {
            impar++;
        };        
        printf("Informe outro numero: ");
        scanf("%d", &num);
    }
    printf("A quantidade de numeros pares eh: %d\n", par);
    printf("A quantidade de numeros impares eh: %d\n", impar);
    return 0;
}