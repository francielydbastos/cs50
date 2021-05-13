// Prints a 3-by-3 grid of bricks with nested loops

#include <cs50.h>
#include <stdio.h>

int main(void)
{
//Asking for user input
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

//Building the pyramid
    for (int i = 1; i <= height; i++)
    {
        for (int j = (height - i); j > 0; j--)
        {

            printf(" ");

        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}