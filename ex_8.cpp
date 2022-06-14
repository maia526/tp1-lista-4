// Leia um vetor v de 10 inteiros e dois valores inteiros n1 e n2. Em seguida, imprima os valores de v
// que estão no intervalo de n1 a n2 (inclusive). Caso n1 seja maior que n2 imprima uma mensagem
// de erro.

#include <stdio.h>
int main() {
    int v[10], n1, n2;

    for (int i = 0; i < 10; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n1 < n2){
        for (int i = 0; i < 10; i++){
            if (v[i] >= n1 && v[i] <= n2){
                printf(" %d", v[i]);
            }
        }
    }
    else
        puts("Erro");

}
