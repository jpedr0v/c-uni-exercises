/* Faça um programa que informe a quantidade total de calorias a partir da escolha do usuário, que deve informar o prato típico e a bebida.
Diferença Switch vs If:
- Switch: Compara igualdade de valores inteiros (caso 1, caso 2...). Melhor para menus.
- If/Else: Avalia condições lógicas verdadeiras ou falsas (maior, menor, intervalos).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    float total;

    total = 0;

    printf("1 - Italiano 2 - Japones - 3 Salvadorenho\n");
    printf("Escolha o prato desejado: ");
    scanf("%d", &op);
    switch (op){
        case 1: total = total + 750;
        break;
        case 2: total = total + 324;
        break;
        case 3: total = total + 545;
        default: printf("Opção inválida! Nenhuma caloria adicionada.\n");
        return 0;
        break;
    }
    printf("\n1 - Cha 2 - Suco de laranja 3 - Refrigerante\n");
    printf("Escolha a bebida desejada: ");
    scanf("%d", &op);
    switch (op){
        case 1: total = total + 30;
        break;
        case 2: total = total + 80;
        break;
        case 3: total = total + 90;
        default: printf("Opção inválida! Nenhuma caloria adicionada.\n");
        return 0;
        break;
    }
    printf("O total de calorias eh: %.2f \n", total);

    return 0;
}