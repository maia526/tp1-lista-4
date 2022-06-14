// Leia a matrícula e o salário de 10 funcionários. Calcule o novo salário de todos os funcionários
// sabendo que o reajuste é de 8%. Ao final, exiba uma lista de funcionários com suas matrículas e
// novos salários.
#include <stdio.h>
int main() {
    int f[10], fn[10];
    float s[10], sn[10];

    for (int i = 0; i < 10; i++){
        printf("Matricula %d: ", i+1);
        scanf("%d", &f[i]);

        printf("Salario: ");
        scanf("%f", &s[i]);
    }

    for (int j = 0; j < 10; j++){
        sn[j] = 1.08 * s[j];
    }

    for (int k = 0; k < 10; k++){
        printf("\nMatricula: %d\nSalario novo: %.2f\n", f[k], sn[k]);
    }
}
