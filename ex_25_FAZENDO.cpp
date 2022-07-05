// Leia uma matriz m (4x4), calcule e imprima o seu determinante.

#include <stdio.h>
int main()
{
    //lê a matriz m
    int m[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    //criar matriz d com duas primeiras colunas de m repetidas no final
    int d[4][6];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d[i][j] = m[i][j];
        }
    }
    
    //repete as duas primeras colunas de m no final de d
    int cont1 = 0, cont2 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j < 6; j++)
        {
            d[i][j] = m[cont1][cont2];
            cont2++;
        }
        cont1++;
        cont2 = 0;
    }
    
    //multiplicar valores na diagonal de 0, 1 e 2, guardar num vetor x
    int x[3];
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            x[i] = d[0][0] * d[1][1] * d[2][2] * d[3][3];
        }

        if (i == 1)
        {
            x[i] = d[0][1] * d[1][2] * d[2][3] * d[3][4];
        }

        if (i == 2)
        {
            x[i] = d[0][2] * d[1][3] * d[2][4] * d[3][5];
        }
    }
    
    
    //multiplicar valores na diagonal no outro lado de 3, 5, e 5, guardar num outro vetor y
    int y[3];
    for (int i = 5; i > 2; i--)
    {
        if (i == 5)
        {
            y[i] = d[0][5] * d[1][4] * d[2][3] * d[3][2];
        }

        if (i == 4)
        {
            y[i] = d[0][4] * d[1][3] * d[2][2] * d[3][1];
        }

        if (i == 3)
        {
            y[i] = d[0][3] * d[1][2] * d[2][1] * d[3][0];
        }
    }
    
    //somar valores de x
    int soma_x = 0;
    for (int i = 0; i < 3; i ++)
        soma_x += x[i];
    
    //determinante = subtrair x dos elementos de y
    int determinante = soma_x;
    for (int i = 0; i < 3; i++)
        determinante -= y[i];

    printf("\nDeterminante: %d", determinante);
}
