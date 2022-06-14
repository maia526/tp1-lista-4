// Leia dois vetores de inteiros a e b com n números cada (máximo de 10 números) e calcule o
// produto escalar p de a e b, isto é, p = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + ... + a[n-1] * b[n-1].
#include <stdio.h>
int main() {
    int n, p = 0;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    if (n < 0 || n > 10)
        puts("valor invalido.");
    else{
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);

            printf("b[%d]: ", i);
            scanf("%d", &b[i]);
        }

        for (int i = 0; i < n; i++){
            p += (a[i] * b[i]);
        }

        printf("\nProduto escalar = %d", p);
    }
}
