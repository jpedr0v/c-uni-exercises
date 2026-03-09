//Crie um programa que o salário e o número de filhos dos habitantes. Deve ser lido até o valor -1 for informado para salário. No final, apresente a média salarial da população, a média de filhos e o maior salário.

#include <stdio.h>

int main(){
    int filhos, numPessoas = 0;
    float salario, somas = 0, somaFilhos = 0, maiorSalario = 0;

    printf("Informe o salario (digite -1 para encerrar)\n");
    scanf("%f", &salario);

    while (salario != -1){
        printf("Informe o numero de filhos\n");
        scanf("%d", &filhos);
        numPessoas++;
        if (salario > maiorSalario)
            maiorSalario = salario;
        somaFilhos += filhos;
        somas += salario;
        printf("Informe o salario:\n");
        scanf("%f", &salario);
    }

    if (numPessoas > 0) {
        printf("A media de salarios eh: %.2f\n", somas/numPessoas);
        printf("A media de filhos eh: %.2f\n", somaFilhos/numPessoas);
        printf("O maior salario eh: %.2f\n", maiorSalario);
    }
    else {
        printf("Nenhum dado foi informado.\n");
    }
    return 0;
}