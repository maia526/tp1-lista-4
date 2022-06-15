// Leia um vetor de inteiros v (máximo de 20 números), um número n e uma posição p. Em seguida,
// insira o número n na posição p do vetor (deslocando os demais números para a direita) e imprima
// v. Caso a posição p seja inválida, apresente uma mensagem de erro.
#include <stdio.h>
const int tam_max = 20;
int main()
{
    int x, n, p;
    printf("Tamanho do vetor: ");
    scanf("%d", &x);

    if (x <= tam_max && x > 0){
        int v[x + 1];
        for (int i = 0; i < x; i++){
            printf("v[%d]: ", i);
            scanf("%d", &v[i]);
        }

        printf("N: ");
        scanf("%d", &n);

        printf("P: ");
        scanf("%d", &p);

        for (int j =  x-1; j >= p; j--){
            v[j+1] = v[j];
        }
        v[p] = n;

        for(int i = 0; i < x; i++){
            printf(" %d", v[i]);
        }
    }
    else
        puts("Valor invalido");

}
