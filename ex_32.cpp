// Leia duas sequências com n dígitos (0 a 9), que devem ser interpretadas como dois números
// inteiros de n algarismos. Calcule a sequência de dígitos que representa a soma dos dois inteiros.
#include <stdio.h>
#include <math.h>
int main()
{
    int tam1, tam2;
    //ler tamanho dos números
    for (int i = 0; i < 1; )
    {
        printf("\nQuantidade de digitos do primeiro numero: ");
        scanf("%d", &tam1);

        if (tam1 > 0)
           i++;
        else
            printf("\nTamanho invalido, digite um numero maior que 0.\n");
    }

    for (int i = 0; i < 1; )
    {
        printf("\nQuantidade de digitos do segundo numero: ");
        scanf("%d", &tam2);

        if (tam2 > 0)
           i++;
        else
            printf("\nTamanho invalido, digite um numero maior que 0.\n");
    }

    //criar vetores que vão receber os numeros
    int num1[tam1];
    int num2[tam2];

    //ler numero 1
    int dig, x = 0, y = 0;
    for (int i = 0; i < tam1; i++)
    {
        printf("\nDigito %d: ", i+1);
        scanf("%d", &dig);

        x += dig * pow(10, tam1 - (i + 1));
    }
    printf("\nNUMERO 1: %d\n", x);

    //ler numero 2
    for (int i = 0; i < tam2; i++)
    {
        printf("\nDigito %d: ", i+1);
        scanf("%d", &dig);

        y += dig * pow(10, tam2 - (i + 1));
    }
    printf("\nNUMERO 2: %d", y);

    printf("\n\nSoma: %d", x + y);

}
