#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //ask the user how much change is owed and makes sure no negative number is accepted
    float n;
    do
    {
        n = get_float("How much do you owe? $");
    }
    while (n < 0);
    
    int change = round(n * 100);

    //calculate the minimum number of coins
    int quarter = change / 25;
    int dimes = (change % 25) / 10;
    int nickels = ((change % 25) % 10) / 5;
    int pennies = (((change % 25)%10)%5);
    
    //print answer
    int total = quarter + dimes + nickels + pennies;
    printf("Change owed: %i\n", total);
}