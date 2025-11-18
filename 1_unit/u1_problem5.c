// Elabore um programa que calcule a área de um trapézio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float base_menor, base_maior, altura, area;

    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &altura);

    area = (base_maior + base_menor) * altura / 2;

    printf("A area do trapezio eh: %.2f", area);
    return (0);
}