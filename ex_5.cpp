// Leia um vetor v de 10 inteiros e um número inteiro k. Ao final, imprima os números de v que são
// múltiplos de k.

#include <stdio.h>
int main() {
    int v[10], k;
    printf("K: ");
    scanf("%d", &k);

    for (int i = 0; i < 10; i++){
        printf("n: ");
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++){
        if (v[i] % k == 0)
            printf(" %d", v[i]);
    }
}
