#include <stdio.h>

int main()
{
    /* required variables*/
    int N, hours, minutes, seconds;

    /* required input */
    scanf("%d", &N);

    /* calculation */
    hours = N/3600;
    //printf("test line: %d\n", N);
    N= N%3600; /* i have a little confusion here Needs a details log.*/
    //printf("test line: %d\n", N);
    minutes = N/60;
    N = N%60;
    seconds = N;

    /* output section */
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;

}
