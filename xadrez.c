#include <stdio.h>

// Desafio Nivel: Iniciante
 
int main() {
    int jogada;
    int b = 0;
    int r = 0;
   
    // Cria o Menu inicial para selecionar a jogada
    printf("Selecione a Jogada:\n");
    printf("1. Mover Torre \n");
    printf("2. Mover Bispo \n");
    printf("3. Mover Rainha \n");
    printf("4. Sair\n");
    printf("Escolha uma Jogada: \n");
    scanf("%d", &jogada);
       
    switch(jogada) {
        // Execulta o movimento da Torre
        case 1:
        printf("Você Selecionou mover Torre \n");

        for(int i = 0; i < 5; i++){
            printf("Cima\n"); // Imprime a direção da jogada  
        }   
        break;

        // Execulta o movimento do Bispo
        case 2:
            printf("Você Selecionou mover Bispo \n");

            while (b < 5){

            printf("Cima \n");
            printf("Direita \n");
            b++;
        }
        
        break;

        // Execulta o movimento da Rainha
        case 3: 
            printf("Você Selecionou mover Rainha \n");

            do { 
            printf("Esquerda\n");
            r++;
        
            } while (r < 8);
        break;

        // Execulta a saída do jogo!
        case 4:
            printf("Saindo do Jogo!.... \n");
        break;

        default:
            printf("Opção inválida!\n");
        }
   
    return 0;
}
