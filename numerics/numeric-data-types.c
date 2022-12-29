#include <stdio.h>

int main(void)
{
    /* int, double, float */

    int dogs = 2; // whole numbers

    // when you are unsure if the number is a float or a double, err on the side of double

    // doubles and floats are decimal numbers -> doubles is 'double' precision, floats is 'single' precision
    // doubles take up more memory than floats -> this is why you might use floats instead for some operations
    // Floats are stored in scientific notation

    printf("%i %f %f\n", 1, 11111.1111, 1111.111111F); // Converts the float to a double

    return 0;
}