#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompts the user for their name and greets them
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}