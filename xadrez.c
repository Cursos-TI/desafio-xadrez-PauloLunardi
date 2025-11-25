#include <stdio.h>

// **************Desafio Nivel: Mestre
// Adição da jogada com recursividade
// Adição do Loops Complexos para o Cavalo
// Adição de Loops Aninhado + Repercursivo para o Bispo

void mover_torre(int casas){
    //printf("Você Selecionou mover Torre \n");
    if(casas > 0){
        printf("Direita \n");
        mover_torre(casas - 1);
    }
};

// Conforme Requisitos Funcionais especificados:
void mover_bispo(int casas){
    if(casas <= 0){
        return;
    }

    // faz o movimento lateral
    for(int j = 0; j < 1; j++){
            printf("Direita ");
        }

    // Movimento para cima
    printf("Cima \n");
    
    // Continuação da Repercursão
    mover_bispo(casas - 1);
}

void mover_rainha(int casas){
    // printf("Você Selecionou mover Rainha \n");
    if (casas > 0){
        printf("Esquerda\n");
        mover_rainha(casas - 1);
    } 
}

void mover_cavalo(int mov_cima, int mov_dir) {

    // Movimento para cima
    for(int i = 0; i < mov_cima; i++){
        printf("Cima ");
    }

    // Movimento para direita
    for(int j = 0; j < mov_dir; j++){
        printf("Direita ");
    }
}

int main() { 
    //mover_torre(4);
    mover_bispo(5);
    //mover_rainha(8);
    //mover_cavalo(5, 2);
   return 0;
}
