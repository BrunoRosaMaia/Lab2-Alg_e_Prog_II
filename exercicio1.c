#include <stdio.h>

int main(){
    int n1, n2;

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf("%d", &n2);

    printf("Soma dos números: %d\n", n1 + n2);
    printf("Subtração dos números: %d\n", n1 - n2);
    printf("Multiplicação dos números: %d\n", n1 * n2);
    printf("Divisão dos números: %d\n", n1 / n2);

    return 0;
}