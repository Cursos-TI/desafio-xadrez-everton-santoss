#include <stdio.h>

int main() {
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }
    printf("\n");
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita %d\n", j);
        j++;
    }
    printf("\n");
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);
    
    printf("\n");
    printf("Movimento do Cavalo:\n");
    for (int m = 1; m <= 2; m++) {
        printf("Baixo %d\n", m);
    }
    int n = 1;
    while (n <= 1) {
        printf("Esquerda %d\n", n);
        n++;
    }

    return 0;
}