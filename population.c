#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("What's the initial size of the population? ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("What's the final size of the population? ");
    }
    while (end < start);

    //TODO: Calculate number of years until we reach threshold
    int years = 0;
    if (start == end)
        {
            years = 0;
        }
    else
    {
        int llamas = start;
        do
        {
            llamas = llamas + (llamas / 3) - (llamas / 4);
            years = years + 1;
        }
        while (llamas <= end);
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
}