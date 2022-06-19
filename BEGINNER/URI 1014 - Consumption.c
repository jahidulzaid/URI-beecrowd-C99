#include <stdio.h>

int main()
{
    /* required variables*/
    int X;
    float Y, consumption;

    /* required input */
    scanf("%d %f", &X, &Y);

    /* calculation */
    consumption = X/Y;
    /* output section */
    printf("%.3f km/l\n", consumption);

    return 0;

}
