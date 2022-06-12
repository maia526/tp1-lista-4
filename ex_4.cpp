// Leia um vetor v de 10 inteiros e um valor inteiro k. Copie para um vetor w os elementos de v que
// são maiores que k. Ao final, imprima o vetor w.

#include <stdio.h>
int main() {
    int v[10], k, w[10], j;
    printf("K: ");
    scanf("%d", &k);

    for (int i = 0; i < 10; i++){
        printf("n: ");
        scanf("%d", &v[i]);
    }
    j = 0;
    for (int i = 0; i < 10; i++) {
        if(v[i] > k){
            w[j] = v[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++){
        printf(" %d", w[i]);
    }
}
