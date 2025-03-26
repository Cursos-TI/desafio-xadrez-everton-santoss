#include <stdio.h>


void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}


void moverBispoDireitaCima(int casas, int movimento) {
    if (casas == 0) return;
    printf("Diagonal Direita para Cima\n");
    moverBispoDireitaCima(casas - 1, movimento);
}


void moverRainhaParaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaParaCima(casas - 1);
}


void moverCavaloEmL() {
    int i, j;
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (j = 0; j < 1; j++) { 
        printf("Direita\n");
    }
}

int main() {
    int casas = 3;
    
    printf("Movimentando a Torre:\n");
    moverTorreDireita(casas);
    printf("\n");

    printf("Movimentando o Bispo:\n");
    moverBispoDireitaCima(casas, 1);
    printf("\n");
    
    printf("Movimentando a Rainha:\n");
    moverRainhaParaCima(casas);
    printf("\n");
    
    printf("Movimentando o Cavalo:\n");
    moverCavaloEmL();
    
    return 0;
}
