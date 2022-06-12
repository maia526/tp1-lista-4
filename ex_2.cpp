// Leia um vetor v de 10 inteiros e imprima os números pares de trás para frente.

#include <stdio.h>
int main() {
    int v[10];

    for (int i = 0; i < 10; i++){
        printf("n: ");
        scanf("%d", &v[i]);
    }

    for (int i = 9; i >= 0; i--){
        if (v[i] % 2 == 0)
            printf(" %d", v[i]);
    }
}
