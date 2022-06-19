#include <stdio.h>

int main()
{
    /* required variables*/
    char Name;
    double SALARY, SOLD_VALUE, total;
    
    /* required input */
    scanf("%s %lf %lf", &Name, &SALARY, &SOLD_VALUE);
    
    /* calculation */
    total = SALARY + SOLD_VALUE * 0.15;
    
    /* output section */
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
    
}

