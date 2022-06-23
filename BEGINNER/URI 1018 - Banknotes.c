#include <stdio.h>

int main()
{
    /* required variables*/
    int N, hundred, fifty, twenty, ten, five, two, one;

    /* required input */
    scanf("%d", &N);
    printf("%d\n", N); /* this line needs to execute first to show the input value 1st. C codes execute 1st to last line by line..*/

    /* calculation */
    hundred = N/100;
    N = N % 100;
    fifty = N /50;
    N = N % 50;
    twenty = N /20;
    N = N % 20;
    ten = N/10;
    N = N % 10;
    five = N /5;
    N = N%5;
    two = N/2;
    N = N%2;
    one = N;
    /* output section */
    printf("%d nota(s) de R$ 100,00\n", hundred);
    printf("%d nota(s) de R$ 50,00\n", fifty);
    printf("%d nota(s) de R$ 20,00\n", twenty);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", five);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);
    return 0;

}
