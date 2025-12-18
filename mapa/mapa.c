// Imagine que você foi contratado para desenvolver um sistema de gerenciamento de livros para uma pequena biblioteca. O sistema deve permitir que o bibliotecário cadastre, pesquise, ordene e gerencie o acervo de 20 livros. Esta tarefa exigirá a aplicação de diversos conceitos fundamentais da linguagem C.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// CONSTANTE: Define o tamanho máximo do acervo.
// Facilitador de manutenção: se precisar aumentar a biblioteca, basta mudar este número.
#define TAMANHO_ACERVO 20

// STRUCT: Define o "modelo" da ficha do livro.
struct Livro {
    int codigo;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};

//Função cadastrarLivros: use um laço for para percorrer o vetor de structs. Dentro do laço, use printf e scanf para solicitar e ler os dados de cada livro. Lembre-se de usar fflush(stdin) após cada scanf para limpar o buffer do teclado.
void cadastrarLivros(struct Livro acervo[], int *qtdLivros) {
    // VALIDAÇÃO: Verifica se o acervo já atingiu o limite da constante.
    if (*qtdLivros >= TAMANHO_ACERVO) {
        printf("\nERRO: O acervo esta cheio (20 livros)!\n");
        printf("Pressione qualquer tecla para voltar...");
        system("pause > nul"); // Pausa para o usuário ler
        return;
    }

    // LAÇO DE CADASTRO:
    // Começa da posição atual (*qtdLivros) para não sobrescrever livros antigos.
    for (int i = *qtdLivros; i < TAMANHO_ACERVO; i++) {
        system("cls");
        printf("===================================\n");
        printf("   CADASTRAR LIVRO (Posicao %d)\n", i + 1);
        printf("===================================\n");
        
        printf("Codigo: ");
        scanf("%d", &acervo[i].codigo);
        fflush(stdin); // Limpeza de buffer

        //VALIDAÇÃO: O livro só será adicionado se cumprir o tamanho de 2 caracteres (strlen).
        do {
            printf("Titulo: ");
            scanf("%[^\n]", acervo[i].titulo);
            fflush(stdin);

            // strlen calcula o tamanho da string. Se for menor que 2, avisa.
            if (strlen(acervo[i].titulo) < 2) {
                printf("\n>>> Titulo muito curto! Tente novamente.\n");
            }

        } while (strlen(acervo[i].titulo) < 2);

        printf("Autor: ");
        scanf("%[^\n]", acervo[i].autor);
        fflush(stdin);

        printf("Area: ");
        scanf("%[^\n]", acervo[i].area);
        fflush(stdin);

        // VALIDAÇÃO DE DADOS (ANO):
        // Garante que o usuário digite apenas números dentro de um período real.
        int leuCerto = 0;
        do {
            printf("Ano: ");
            leuCerto = scanf("%d", &acervo[i].ano);
            fflush(stdin);

            if (leuCerto == 0 || acervo[i].ano < 0 || acervo[i].ano > 2025) {
                printf("\n>>> ERRO: Digite um ano valido (apenas numeros entre 0 e 2025).\n");
                leuCerto = 0;
            }
            else {
                leuCerto = 1;
            }

        } while (leuCerto == 0);

        printf("Editora: ");
        scanf("%[^\n]", acervo[i].editora);
        fflush(stdin);
        
        // Incremento do contador
        (*qtdLivros)++;
        printf("\n>>> SUCESSO: Livro cadastrado! <<<\n");

        // Permite que o usuário decida se quer cadastrar outro livro ou não.
        printf("\nDeseja cadastrar outro livro? (1 Sim / 0 Nao): ");
        int continuar;
        scanf("%d", &continuar);
        fflush(stdin);

        if (continuar == 0){
            break; // Sai do laço 'for' e volta ao menu principal
        }
    }
}

//Função imprimirLivros: percorra o vetor com um laço for e use printf para exibir os dados de cada livro.
void imprimirLivros(struct Livro acervo[], int qtdLivros){
    system("cls");

    //VALIDAÇÃO: Verifica se há livros cadastrados.
    if (qtdLivros == 0) {
        printf("\nNenhum livro cadastrado no momento.\n");
        printf("Pressione qualquer tecla para voltar...");
        system("pause > nul");
        return;
    }

    printf("===================================\n");
    printf("        LISTA DE LIVROS\n");
    printf("===================================\n");

    // Percorre o vetor do índice 0 até a quantidade cadastrada
    for (int i = 0; i < qtdLivros; i++) {
        printf("\nLivro %d:\n", i +1);
        printf("Codigo: %d\n", acervo[i].codigo);
        printf("Titulo: %s\n", acervo[i].titulo);
        printf("Autor: %s\n", acervo[i].autor);
        printf("Area: %s\n", acervo[i].area);
        printf("Ano: %d\n", acervo[i].ano);
        printf("Editora: %s\n", acervo[i].editora);
        printf("-----------------------------------\n");
    }
    printf("Pressione qualquer tecla para voltar...");
    system("pause > nul");
}

//Função pesquisarLivro: solicite ao usuário o código do livro a ser pesquisado. Percorra o vetor com um laço while. Se o código for encontrado, exiba as informações do livro. Se não, mostre uma mensagem de "não encontrado".
void pesquisarLivro(struct Livro acervo[], int qtdLivros, int codigoBusca){
    system("cls");
    int i = 0;
    int encontrado = 0; // Variável de controle

    // Percorre o vetor enquanto não chegar ao fim E não tiver encontrado
    while (i < qtdLivros && encontrado == 0) {
        if (acervo[i].codigo == codigoBusca) {
            printf("\n>>> LIVRO ENCONTRADO! <<<\n");
            printf("-------------------------\n");
            printf("Titulo: %s\n", acervo[i].titulo);
            printf("Autor: %s\n", acervo[i].autor);
            printf("Area: %s\n", acervo[i].area);
            printf("Ano: %d\n", acervo[i].ano);
            printf("Editora: %s\n", acervo[i].editora);
            printf("-------------------------\n");
            encontrado = 1; // Marca como encontrado para encerrar o loop
        }
        i++;
    }

    if (encontrado ==0) {
        printf("\n>>> Livro NAO encontrado! <<<\n");
    }
    printf("Pressione qualquer tecla para voltar...");
    system("pause > nul");
}

//Função ordenarLivros: implemente o método de ordenação da bolha (BubbleSort) para ordenar os livros por ano de publicação, usando laços for aninhados e uma variável temporária para a troca.
void ordenarLivros(struct Livro acervo[], int qtdLivros){
    system("cls");
    if (qtdLivros == 0) {
        printf("\nNao ha livros para ordenar.\n");
        return;
    }

    struct Livro temporaria; //Variável auxiliar para realizar o swap
    int i, j;

    // Laços aninhados característicos do Bubble Sort
    for (i = 0; i < qtdLivros - 1; i++){
        for (j = 0; j < qtdLivros - i - 1; j++){
            // Comparação: Se o ano atual for MAIOR que o próximo, troca.
            if (acervo[j].ano > acervo[j + 1].ano){
                temporaria = acervo[j];
                acervo[j] = acervo[j + 1];
                acervo[j + 1] = temporaria;
            }
        }
    }
    
    printf("\n============================================\n");
    printf("  Livros ordenados por ano com sucesso!\n");
    printf("============================================\n");
    printf("Pressione qualquer tecla para voltar...");
    system("pause > nul");
}

//Função Main: use um laço de repetição (do-while ou while) e uma estrutura de seleção (switch-case ou if-else) para exibir o menu e chamar a função correspondente à opção do usuário.
int main (){
    setlocale(LC_ALL, "Portuguese"); // Configura acentuação para o console

    struct Livro acervo[TAMANHO_ACERVO]; // Declaração do Vetor de struct
    int opcao = 0;
    int qtdLivros = 0; // Variável auxiliar obrigatória para contar os registros
    int codigoBusca;

    // Loop do Menu Principal
    while (opcao != 5) {
        system("cls");
        printf("==================================\n");
        printf("      SISTEMA DE BIBLIOTECA       \n");
        printf("==================================\n");
        printf(" 1 - Cadastrar Livro\n");
        printf(" 2 - Imprimir Acervo\n");
        printf(" 3 - Pesquisar por Codigo\n");
        printf(" 4 - Ordenar por Ano\n");
        printf(" 5 - Sair\n");
        printf("==================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        // Estrutura condicional para direcionar às funções
        if (opcao == 1) {
            // Passa o ENDEREÇO (&) de qtdLivros para que a função possa alterá-lo
            cadastrarLivros(acervo, &qtdLivros);
        }
        else if (opcao == 2) {
            imprimirLivros(acervo, qtdLivros);
        }
        else if (opcao == 3) {
            printf("Digite o codigo do livro para buscar: ");
            scanf("%d", &codigoBusca);
            fflush(stdin);
            pesquisarLivro(acervo, qtdLivros, codigoBusca);
        }
        else if (opcao == 4) {
            ordenarLivros(acervo, qtdLivros);
        }
        else if (opcao == 5) {
            printf("Fechando o programa...\n");
        }
        else {
            printf("Opcao invalida! Insira um numero\n");
            printf("Pressione qualquer tecla para voltar...");
            system("pause > nul");
        }
    }
    return 0;
}