/* Em uma avaliação de um produto, o cliente responde sua opinião (1 – satisfatório; 2 – indiferente; 3 – insatisfatório).
Faça um programa que leia idade e opinião e apresente: o número de clientes que responderam satisfatório, a média de idade dos clientes que opinaram como satisfatório, e o número de clientes que responderam insatisfatório.
O programa se encerra quando for digitado o valor zero para idade. */

#include <stdio.h>

int main (){

    int idade, opiniao;
    int pInsatisfeitas = 0, pSatisfeitas = 0;
    float somaIdade = 0, media;

    printf("Informe a idade:\n");
    scanf("%d", &idade);

    while (idade != 0){

        do{
            printf("Informe a opiniao (1 - satisfatorio; 2 - indiferente; 3 - insatisfatorio):\n");
            scanf("%d", &opiniao);
        }
        while ((opiniao != 1) && (opiniao != 2) && (opiniao != 3));

        if (opiniao == 1){
            pSatisfeitas++;
            somaIdade += idade;
        }
        else if (opiniao == 3){
            pInsatisfeitas++;
        }

        printf("Informe a idade:\n");
        scanf("%d", &idade);
    }

    if (pSatisfeitas > 0)
        media = somaIdade / pSatisfeitas;
    else
        media = 0;

    printf("O numero de pessoas satisfeitas eh: %d\n", pSatisfeitas);
    printf("O numero de pessoas insatisfeitas eh: %d\n", pInsatisfeitas);
    printf("A media de idade das pessoas satisfeitas eh: %.2f\n", media);

    return 0;
}