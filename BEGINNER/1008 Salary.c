#include <stdio.h>

int main()
{
    int NUMBER, WORKED_HOURS; 
    float PER_HOURS_SALARY, SALARY;
    scanf("%d %d %f", &NUMBER, &WORKED_HOURS, &PER_HOURS_SALARY);
    printf("NUMBER = %d\n", NUMBER);
    SALARY = WORKED_HOURS * PER_HOURS_SALARY;
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
    
}

