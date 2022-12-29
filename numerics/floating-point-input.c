#include <stdio.h>

int main(void)
{
    printf("How many dogs do you have? ");
    double dogs;

    scanf("%lf", &dogs); // %lf = long float -> reads scientific notation & decimal notation

    printf("%f\n", dogs);
    printf("%e\n", dogs);
    printf("%g\n", dogs);
    return 0;
}