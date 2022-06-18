#include <stdio.h>

int main()
{
    /* required variables*/
    double A, B, C;
    float pi = 3.14159;
    float rectangled_triangle, circle_area, trapezium_area, square_area, rectangled_area;


    /* required input */
    scanf("%lf %lf %lf", &A, &B, &C);

    /* calculation */
    rectangled_triangle = 0.5 * A * C;
    circle_area = pi * C * C;
    trapezium_area = 0.5*(A+B)*C;
    square_area = B * B;
    rectangled_area = A * B;

    /* output section */
    printf("TRIANGULO: %.3f\n", rectangled_triangle);
    printf("CIRCULO: %.3f\n", circle_area);
    printf("TRAPEZIO: %.3f\n", trapezium_area);
    printf("QUADRADO: %.3f\n", square_area);
    printf("RETANGULO: %.3f\n", rectangled_area);

    return 0;

}
