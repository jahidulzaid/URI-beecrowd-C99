#include <stdio.h>

int main() {
    int X, Y;
    float cachorroQuente = 4, xSalada = 4.5, xBacon = 5, torrandaSimples=2, refrigenrante=1.5;

    scanf("%d %d", &X, &Y);
    if (X == 1)
    {
        cachorroQuente *= Y;
        printf("Total: R$ %.2f\n", cachorroQuente);
    }
    if (X == 2)
    {
        xSalada *= Y;
        printf("Total: R$ %.2f\n", xSalada);
    }
    if (X == 3)
    {
        xBacon *= Y;
        printf("Total: R$ %.2f\n", xBacon);
    }
    if (X == 4)
    {
        torrandaSimples *= Y;
        printf("Total: R$ %.2f\n", torrandaSimples);
    }
    if (X == 5)
    {
        refrigenrante *= Y;
        printf("Total: R$ %.2f\n", refrigenrante);
    }
    return 0;
}
