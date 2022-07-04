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
        for int(j = 0; j < 4; j++)
        {
            d[i][j] = m[i][j]
        }
    }
    
    //repete as duas primeras colunas de m no final de d
    int cont1 = 0, cont2 = 0;
    for (int i = 4; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d[i][j] = m[cont1][cont2];
            cont2++;
        }
        cont1++;
    }
    
    //multiplicar valores na diagonal de 0, 1 e 2, guardar num vetor x
    
    //multiplicar valores na diagonal no outro lado de 3, 5, e 5, guardar num outro vetor y
    
    //somar valores de x
    
    //determinante = subtrair x dos elementos de y
}
