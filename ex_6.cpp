// Leia um vetor v com 10 números reais. Em seguida, percorra o vetor v e imprima o valor e a
// metade do valor (se ele for menor que 10) ou o dobro do valor (se ele for maior ou igual a 10).

#include <stdio.h>
int main() {
    int v[10];

    for (int i = 0; i < 10; i++){
        printf("n: ");
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++){
        if (v[i] < 10)
            printf(" %d", v[i] / 2);
        else
            printf(" %d", v[i] * 2);
    }
}
