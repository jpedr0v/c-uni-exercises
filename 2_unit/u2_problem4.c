/* Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e imprima o seu peso ideal, sabendo que:
 Para homens (72.7 * altura) - 58
 Para mulheres (62.1 * altura) - 44.7 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float altura, peso;
    char sexo;

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
        printf("\nO peso ideal para homens eh: %.2f kg", peso);
    }
    else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("\nO peso ideal para mulheres eh: %.2f kg", peso);
    }
    else {
        printf("Sexo invalido! Use M ou F");
        return 0; //Se o sexo estiver errado, o programa termina aqui.
    }

    printf("\nSexo: %c \nAltura: %.2f \nPeso Ideal: %.2f\n", sexo, altura, peso);

    return 0;
}