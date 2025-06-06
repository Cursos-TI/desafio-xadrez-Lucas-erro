#include <stdio.h>

int main() {
    printf("Xaderez Novato!\n");

    // Movimento da Torre: 5 casas para a direita
    int movimentoTorre = 5;  // Quantidade de casas que a Torre vai se mover
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= movimentoTorre; i++) {
        // A cada iteração, representa uma casa movida
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    int movimentoBispo = 5;  // Quantidade de casas que o Bispo vai se mover
    printf("Movimento do Bispo:\n");
    int j = 1;  // Variável de controle para o while
    while(j <= movimentoBispo) {
        // Movimento na diagonal é representado por duas direções
        printf("Cima, Direita\n");
        j++;  // Incrementa o contador
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    int movimentoRainha = 8;  // Quantidade de casas que a Rainha vai se mover
    printf("Movimento da Rainha:\n");
    int k = 1;  // Variável de controle para o do-while
    do {
        printf("Esquerda\n");
        k++;  // Incrementa o contador
    } while(k <= movimentoRainha);
    
    return 0;
}
