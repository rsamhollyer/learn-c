#include <stdio.h>

int main()
{
    printf("How many eggs do you have? ");
    int eggs;
    scanf("%i", &eggs);

    double dozen = (double)eggs / 12;

    printf("You have %f dozen eggs.\n", dozen);

    return 0;
}