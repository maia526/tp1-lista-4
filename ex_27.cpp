// Leia uma matriz quadrada de inteiros m (4 x 4) e imprima todos os elementos, exceto os da
// diagonal principal.

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

    int n[3][4], cont1 = 0, cont2 = 0, x = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
            {
                n[cont1][cont2] = m[i][j];
                cont2++;
                x++;
            }
        }
        if (x == 4)
        {
            cont1++;
            cont2 = 0;
        }
    }
puts("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("n[%d][%d]: %d\n", i, j, n[i][j]);
        }
    }

    
}
