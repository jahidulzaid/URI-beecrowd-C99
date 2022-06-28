#include <stdio.h>

int main() {
    /* declaration section */
    int A, B, C, D;
    /* input section */
    scanf("%d %d %d %d", &A, &B, &C, &D);

    /* calculation */
    if (B>C && D>A)
    {
        if ( C+D > A+B && C>0 && D>0 && A%2==0)
            printf("Valores aceitos\n");
        else
            printf("Valores nao aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");

    return 0;
}
