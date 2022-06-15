// Leia dois vetores de inteiros v e w (máximo de 10 números). Os vetores v e w podem ter
// quantidades diferentes de números. Ao final, gere o vetor k com os números em comum de v e w.
// Imprima o vetor k.
#include <stdio.h>
int main() {
    const int tam_vet = 10;
    int x, y, r, a;
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);
    
    if (x < 11 && x > 0 && y > 0 && y < 11){
        int v[x], w[y];

        for (int i = 0; i < x; i ++){
            printf("v[%d]: ", i);
            scanf("%d", &v[i]);
        }
        for (int i = 0; i < x; i ++){
            printf("w[%d]: ", i);
            scanf("%d", &w[i]);
        }
        r = 0;
        for (int j = 0; j < x; j++){
            for (int l = 0; l < y; l++){
                if (v[j] == w[l]){
                    r ++;
                }
            }
        }
        int k[r];
        a = 0;
        for (int j = 0; j < x; j++){
            for (int l = 0; l < y; l++){
                if (v[j] == w[l]){
                    k[a] = v[j];
                    a++;
                }
            }
        
        }
        printf("Repetidos: ");
        for (int i = 0; i < r; i++){
            printf(" %d", k[i]);
        }

    }
    else {
        puts("Valor invalido.");
    }
}

