#include <stdio.h>

int main()
{
    /* required variables*/
    double x1, y1, x2, y2;
    double distance;

    /* required input */
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    /* calculation */
    distance = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    /* output section */
    printf("%.4f\n", sqrt(distance));

    return 0;

}
