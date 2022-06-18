#include <stdio.h>
int main()
{
    /* required variables*/
    int a, b, c, MaiorAB, Max;
    /* required input */
    scanf("%d %d %d", &a, &b, &c);
    /* calculation */
    MaiorAB = (a+b+abs(a-b))/2;
    Max = (MaiorAB +c + abs(MaiorAB-c))/2;
    /* output section */
    printf("%d eh o maior\n", Max);
    return 0;
}

