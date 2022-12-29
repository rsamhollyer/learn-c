#include <stdio.h>

/*
    Character set allowed -> ASCII
    This means that it will interpret groups of 8 bits as characters
    ASCII only uses 7 bits to represent characters. Extended character set uses 8 bits

    This means ASCII can represent 128 characters -> 2^7

    Extended character set can represent 256 characters -> 2^8


 */

int main(void)
{
    // char myChar = 'A';      // 65

    char myChar;

    printf("Enter a character: ");

    scanf("%c", &myChar);
    printf("%c\n", myChar); // %c = character
    return 0;
}