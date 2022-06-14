// Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k com 10 posições
// que é o resultado da concatenação de v e w. Imprima o vetor k.
#include <stdio.h>
int main() {
    int v[5], w[5], k[10];
    
    for (int i = 0; i < 5; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);

        printf("w[%d]: ", i);
        scanf("%d", &w[i]);
    }

    for (int i = 0; i < 5; i ++){
        k[i] = v[i];
    }

    for (int i = 5; i < 10; i++){
            k[i] = w[i-5];
    }

    for (int i = 0; i < 10; i++){
        printf(" %d", k[i]);
    }
}
