// Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que se encontram abaixo da
// diagonal principal e o produto deles.

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

    int abaixo[6], cont = 0;
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i > j)
            {
                abaixo[cont] = m[i][j];
                cont++;
            }
        }
    }

    int produto = 1;
    for (int i = 0; i < 6; i++)
    {
        produto *= abaixo[i];
        printf("\nabaixo: %d", abaixo[i]);
    }
    printf("\nProduto: %d", produto);
}
