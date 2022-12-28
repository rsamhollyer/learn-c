#include <stdio.h>

int main(void)
{
    int radius;

    printf("Please enter the radius of the circle: ");
    scanf("%i", &radius); /* &: Address-of operator -> allows mutation */

    double area = 3.14159 * (radius * radius);

    printf("The area of a circle with radius %i is %f\n", radius, area);

    return 0;
}