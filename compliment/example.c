#include <stdio.h>

int main()
{
    char name[51]; /* 50 characters + 1 for the null terminator -> \0 */
    printf("What is your name? ");
    scanf("%s", name); /* %s: string -> don't need to pass the address-of object for arrays */

    printf("Hello, %s! You're looking foine! \n", name);
    return 0;
}