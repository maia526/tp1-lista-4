// Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que estão em linhas pares e
// colunas ímpares.
#include <stdio.h>
int main()
{
    int m[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
                printf("\n%d", m[i][j]);
        }
    }
}
