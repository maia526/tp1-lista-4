// 22. Leia duas matrizes de inteiros a e b (3x3). Em seguida, gere e imprima a matriz c = a + b.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    //ler a
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    //ler b    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    //gerar c = a + b
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    //imprimir c
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nc[%d][%d]: %d", i, j, c[i][j]);
        }
    }
}
