// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================

// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.

// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.

// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

// --- Protótipos das Funções ---
// Declarações antecipadas de todas as funções que serão usadas no programa, organizadas por categoria.
// Funções de setup e gerenciamento de memória:
// Funções de interface com o usuário:
// Funções de lógica principal do jogo:
// Função utilitária:

// DESAFIO NOVATO
// OBJETIVO: Cadastrar e listar 5 territórios(continentes), contendo: nome, cor e quantidade de tropas.


#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5

// -- Definindo a estrutura dos territórios ---
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

// --- Função pra limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função principal ---
int main() {
    Territorio listaTerritorios[MAX_TERRITORIOS];

 // -- menu pra cadastro de territórios   
    printf("Cadastre 5 Territórios\n\n");
    
    // loop pra cadastro de territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro Território %d\n", i + 1);

        printf("Nome: ");
        fgets(listaTerritorios[i].nome, sizeof(listaTerritorios[i].nome), stdin);

        printf("Cor do exército: ");
        fgets(listaTerritorios[i].cor, sizeof(listaTerritorios[i].cor), stdin);

        printf("Quantidade de tropas: ");
        scanf("%d", &listaTerritorios[i].tropas);
        limparBufferEntrada();

        printf("\n");
        printf("Cadastro com sucesso!\n");

    }

    //loop pra listagem dos territórios
    printf("----- MAPA DO MUNDO -----\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d %s", i + 1, listaTerritorios[i].nome);
        printf("Cor: %s", listaTerritorios[i].cor);
        printf("Tropas: %d\n", listaTerritorios[i].tropas);
        printf("-------------------------------\n");
    }

    return 0;
}
