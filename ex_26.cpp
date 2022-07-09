// Leia uma matriz quadrada a (3x3) e gere uma matriz b invertida. Imprima b.
#include <stdio.h>
int main()
{
    int m[3][3];
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    int b[3][3], cont1 = 2, cont2 = 2;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            b[i][j] = m[cont1][cont2];
            cont2--;
        }
        cont1--;
        cont2 = 2;
    }
puts("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("b[%d][%d]: %d\n", i, j, b[i][j]);
        }
    }
}
