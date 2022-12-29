#include <stdio.h>

int main(void)
{
    double dogs = 2.5e4; // Sci. Not. e-> *10

    printf("DECIMAL: %f\n", dogs);
    printf("SCI.NOT.: %e\n", dogs);
    printf("COMPUTER DECIDES: %g\n", dogs);

    /* Conversion Characters:

    %f - float (decimal notation)
    %e - scientific notation
    %g - float or scientific notation (whichever is shorter)
              -4 > exponent > 5 : defaults to scientific notation
     */
    return 0;
}