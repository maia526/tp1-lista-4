// Leia um vetor v de 10 inteiros. Em seguida, imprima os números de v colocando a letra 'p' ao lado
// do maior par e a letra 'i' ao lado do maior ímpar.

#include <stdio.h>
int main() {
    int v[10], maior_par, menor_impar;

    for(int i = 0; i < 10; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++){
        if (v[i] % 2 == 0){
            maior_par = v[i];
            break;
        }
    }

    for (int i = 0; i < 10; i++){
        if (v[i] % 2 != 0){
            menor_impar = v[i];
            break;
        }
    }

    for (int i= 0; i < 10; i++){
        if (v[i] > maior_par && v[i] % 2 == 0)
            maior_par = v[i];
        if (v[i] < menor_impar && v[i] % 2 != 0)
            menor_impar = v[i];
    }

    for (int i= 0; i < 10; i++){
        printf(" %d", v[i]);

        if (v[i] == maior_par)
            putchar('p');
        if (v[i] == menor_impar)
            putchar('i');
    }

}
