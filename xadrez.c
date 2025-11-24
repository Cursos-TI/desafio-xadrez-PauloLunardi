#include <stdio.h>

// Desafio Nivel: Aventureiro
// Adição da jogada do cavalo
// Adição do menu de seleção para o jogador decidir a jogada do cavalo
 
int main() {
    int jogada, jog_cavalo;
    int b = 0;
    int r = 0;
    int mov_cavalo = 1;
   
   
    // Cria o Menu inicial para selecionar a jogada
    printf("Selecione a Jogada:\n");
    printf("1. Mover Torre \n");
    printf("2. Mover Bispo \n");
    printf("3. Mover Rainha \n");
    printf("4. Mover Cavalo \n");
    printf("5. Sair\n");
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

        // Execulta o movimento do Cavalo
        case 4: 
            printf("Você Selecionou mover o Cavalo \n");

            printf("Selecione qual movimento quer realizar \n");
            printf("1. Para cima e para esquerda \n");
            printf("2. Para cima e para direita \n");
            printf("3. Para baixo e para esquerda \n");
            printf("4. Para baixo e para direita \n");

            printf("Escolha o movimento para o cavalo realizar: \n");
            scanf("%d", &jog_cavalo);

            switch(jog_cavalo) {
            // Execulta a jogada cavalo para cima e esquerda
                case 1:
                    while(mov_cavalo--){
                        for (int c = 0; c < 2; c++){
                        printf("Cima "); // Imprime "Cima" duas vezes
                    }
                    printf("Esquerda");
                    }
                break;

                // Execulta a jogada cavalo para cima e direita
                case 2:
                    while(mov_cavalo--){
                        for (int c = 0; c < 2; c++){
                        printf("Cima "); // Imprime "Cima" duas vezes
                    }
                    printf("Direita");
                    }
                break;

                // Execulta a jogada cavalo para baixo e esquerda
                case 3:
                    while(mov_cavalo--){
                        for (int c = 0; c < 2; c++){
                        printf("Baixo "); // Imprime "baixo" duas vezes
                    }
                    printf("Esquerda");
                    }
                break;

                // Execulta a jogada cavalo para baixo e direita
                case 4:
                    while(mov_cavalo--){
                        for (int c = 0; c < 2; c++){
                        printf("Baixo "); // Imprime "baixo" duas vezes
                    }
                    printf("Direita");
                    }
                break;

                default:
                    printf("Opção inválida!\n");
                }

        break;

        // Execulta a saída do jogo!
        case 5:
            printf("Saindo do Jogo!.... \n");
        break;

        default:
            printf("Opção inválida!\n");
        }
   
    return 0;
}
