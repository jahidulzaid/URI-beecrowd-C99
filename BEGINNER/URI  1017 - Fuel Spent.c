#include <stdio.h>

int main() {

int time, speed;
float fuel, avg_fuel;

scanf("%d %d", &time, &speed);
fuel = (float) speed/12;
avg_fuel = time * fuel;
printf("%.3f\n", avg_fuel);
    return 0;
}
