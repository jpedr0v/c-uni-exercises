// Construir um programa que leia o código do aluno, o número de notas da disciplina e as notas. Calcule a média final de cada aluno e informe o número de alunos aprovados e reprovados. Para ser aprovado, o estudante precisa obter média maior ou igual a seis. O programa é encerrado quando é informado o código de aluno zero.
//While

#include <stdio.h>

int main() {
    float nota, soma, media;
    int cod, numNota, numAprovado, numReprovado, i;

    numAprovado = 0;
    numReprovado = 0;

    printf("Informe o numero de notas da disciplina: ");
    scanf("%d", &numNota);

    printf("Informe o codigo do aluno: ");
    scanf("%d", &cod);

    while (cod != 0){
        soma = 0;

        for (i = 1; i <= numNota; i++){
            printf("Informe a %d nota do aluno:\n", i);
            scanf("%f", &nota);
            soma += nota;
        }

        media = soma / numNota;

        if (media >= 6)
            numAprovado++;
        else
            numReprovado++;

        printf("Informe o codigo do proximo aluno: ");
        scanf("%d", &cod);
    }

    printf("O numero de alunos aprovados eh: %d\n", numAprovado);
    printf("O numero de alunos reprovados eh: %d\n", numReprovado);

    return 0;
}