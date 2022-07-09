// Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que se encontram acima da
//diagonal principal e a soma deles.

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

    int acima[6], cont = 0;
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i < j)
            {
                acima[cont] = m[i][j];
                cont++;
            }
        }
    }

    int soma = 0;
    for (int i = 0; i < 6; i++)
    {
        soma += acima[i];
        printf("\nacima: %d", acima[i]);
    }
    printf("\nSoma: %d", soma);
}
