#include <stdio.h>

int main()
{
    /* required variables*/
    int years, months, days, N;

    /* required input */
    scanf("%d", &days);

    /* calculation */
    years   = days / 365;
    days    = days % 365;
    months  = days / 30;
    days    = days % 30;
    days    = days;

    /* output section */
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;

}
