//O problema consiste em ler um conjunto de números inteiros e contar a quantidade de números pares e ímpares. A leitura deve ser realizada até que seja lido o valor zero.
//Do-while

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, impar, par;
    par = 0;
    impar = 0;
    do {
        printf("Informe o numero: ");
        scanf("%d", &num);
        if (num != 0){
            if (num % 2 == 0){
                par++;
        }
            else {
                impar++;
            };
        }
    }
    while (num != 0);
    printf("A quantidade de numeros pares eh: %d\n", par);
    printf("A quantidade de numeros impares eh: %d\n", impar);
    return 0;
}