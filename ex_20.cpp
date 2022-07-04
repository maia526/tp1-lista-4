// Ler um vetor notas com 20 notas inteiras de 0 a 10 e imprima um histograma indicando quantos
// alunos tiraram cada nota. Por exemplo, se as notas fossem:
// 9 4 6 2 7 6 7 9 3 5 4 1 2 10 4 6 4 8 7 9
// O histograma seria:
// 0
// 1 *
// 2 * *
// 3 *
// 4 * * * *
// 5 *
// 6 * * *
// 7 * *
// 8 *
// 9 * * *
// 10 *

#include <stdio.h>
int main()
{
    int notas[20];
    //ler o vetor
    for (int i = 0; i < 20; i++)
    {
        printf("notas[%d]: ", i);
        scanf("%d", &notas[i]);
    }
    
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", notas[i]);
        for(int j = 0; j < notas[i]; j++)
            printf("*");
        puts("\n");
    }
}

