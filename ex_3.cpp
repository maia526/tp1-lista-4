// Leia um vetor v de 10 inteiros e um valor inteiro k e imprima quantos elementos são maiores que k.

#include <stdio.h>
int main() {
    int v[10], k, qtd = 0;
    printf("K: ");
    scanf("%d", &k);

    for (int i = 0; i < 10; i++){
        printf("n: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++){
        if (v[i] > k)
            qtd ++;
    }
    printf("Maiores que %d: %d", k, qtd);
}
