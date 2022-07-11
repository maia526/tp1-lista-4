// Leia uma matriz quadrada de inteiros m (5 x 5) e verifique se ela é simétrica, ou seja, se os valores
// da linha 1 são iguais aos da coluna 1, os da linha 2 são iguais aos da coluna 2, e assim por diante.
// Ao final imprimir “É simétrica” ou “Não é simétrica”.
#include <stdio.h>
int main()
{
    int m[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    int x = 4;
    bool simetrico = true;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if( m[i][j] != m[i][x])
                simetrico = false;
            x--;
        }
        x = 4;
    }

    if (simetrico == true)
        printf("\nE simetrico");
    else
        printf("\nNao e simetrico");
}
