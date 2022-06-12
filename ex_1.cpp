// Leia um vetor v de 10 inteiros e gere outro vetor w contendo os elementos de v ao quadrado.
// Imprima w.

#include <stdio.h>
int main() {
    int v[10], w[10];

    for (int i = 0; i < 10; i++){
        printf("n: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i ++){
        w[i] = v[i] * v[i];
    }

    for (int i = 0; i < 10; i ++) {
        printf(" %d", w[i]);
    }
}
