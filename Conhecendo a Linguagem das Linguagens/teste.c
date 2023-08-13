
#include <stdio.h>

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    int resultado = x * y;

    printf("O resultado da multiplicacao entre %d e %d e: %d\n", x, y, resultado);

    return 0;
}
