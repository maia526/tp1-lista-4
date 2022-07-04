// Leia uma matriz de inteiros m (4x3). Em seguida, gere e apresente os vetores soma_linha e
// soma_coluna, cujos elementos são, respectivamente, a soma das linhas e colunas de m.

#include <stdio.h>
int main()
{
    //lê a matriz m
    int m[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    
    //gera vetor de soma das linhas
    int soma_linha[4], a = 0;
    for (int i = 0; i < 4; i++)
    {
        soma_linha[i] = 0;
    }
    
    for (int i = 0; i < 4; i++, a++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma_linha[a] += m[i][j];
        }
    }
    
    //gera vetor soma das colunas
    int soma_coluna[3], b = 0;
    for (int i = 0; i < 3; i++)
    {
        soma_coluna[i] = 0;
    }
    
    for (int i = 0; i < 3; i++, b++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma_coluna[b] += m[j][i];
        }
    }
    
    
    //imprime soma_linha
    for (int i = 0; i < 4; i++)
        printf("\nsoma linha[%d]: %d", i, soma_linha[i]);
    puts("\n");
    //imprime soma_coluna
    for (int i = 0; i < 3; i++)
        printf("\nsoma coluna[%d]: %d", i, soma_coluna[i]);
}
