// Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k que é o resultado
// da soma dos elementos de v e w. Ao final, imprima o vetor k.

#include <stdio.h>
int main() {
    int v[5], w[5], k[5];

    for (int i = 0; i < 5; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);

        printf("w[%d]: ", i);
        scanf("%d", &w[i]);
    }

    for (int i = 0; i < 5; i++){
        k[i] = v[i] + w[i];
    }
    
    for (int i = 0; i < 5; i++){
        printf(" %d", k[i]);
    }
}
