// 21. Leia uma matriz a (2x3) e um valor inteiro k. Em seguida, gere outra matriz b (2x3) onde os
// valores de b são os valores de a multiplicados por k.

#include <stdio.h>

int main()
{
    //ler matriz a
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //ler k
    int k;
    printf("\nK: ");
    scanf("%d", &k);
    
    //gerar matriz b
    int b[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = k * a[i][j];
        }
    }
    
    //imprimir b
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nb[%d][%d]: %d", i, j, b[i][j]);
        }
    }
}
