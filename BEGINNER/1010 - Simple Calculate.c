#include <stdio.h>

int main()
{
    /* required variables*/
    int CODE1, UNITS1;
    float PRICE1, PRICE;
    int CODE2, UNITS2;
    float PRICE2;

    /* required input */
    scanf("%d %d %f", &CODE1, &UNITS1, &PRICE1);
    scanf("%d %d %f", &CODE2, &UNITS2, &PRICE2);

    /* calculation part */
    PRICE1 = PRICE1*UNITS1;
    PRICE2 = PRICE2*UNITS2;
    PRICE = PRICE1 + PRICE2;

    /* output section */
    printf("VALOR A PAGAR: R$ %.2f\n", PRICE);

    return 0;

}
