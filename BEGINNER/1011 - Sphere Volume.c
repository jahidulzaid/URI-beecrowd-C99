#include <stdio.h>

int main()
{
    /* required variables*/
    double R, pi = 3.14159, volume;

    /* required input */
    scanf("%lf", &R);

    /* calculation */
    volume = (4/3.0)*pi*R*R*R;

    /* output section */
    printf("VOLUME = %.3lf\n", volume);

    return 0;

}
