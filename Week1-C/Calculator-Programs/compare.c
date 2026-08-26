#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if (x < y)
    {
        printf("%d is less than %d!\n", x, y);
    }
    else if (x > y)
    {
        printf("%d is greater than %d!\n", x, y);
    }
    else
    {
        printf("%d and %d are equal!\n", x, y);
    }
}