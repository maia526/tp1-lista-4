// Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k com 10 posições
// que é o resultado da intercalação de v e w. Imprima o vetor k.
#include <stdio.h>
int main() {
    int v[5], w[5], k[10], i, j, x;
    
    for (int i = 0; i < 5; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);

        printf("w[%d]: ", i);
        scanf("%d", &w[i]);
    }
    j = 0;
    x = 0;
    for(int i = 0; i < 10; i++){
        if (i % 2 == 0 || i == 0){
                 k[i] = v[j];
                j ++;
        }
        if (i % 2 != 0){
                k[i] = w[x];
                x++;
        }
    }
    for (int i = 0; i < 10; i++)
        printf(" %d", k[i]);  
}
