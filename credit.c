#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //prompts user for credit card number
    long number = get_long("Card number: ");
    long ccnumber = number;

    //checking number of digits
    int ndigits = 0;
    while (ccnumber > 0)
    {
        ccnumber = ccnumber/10;
        ndigits++;
    }

    //checking if number of digits corresponds to a valid credit card and
    if (ndigits != 13 && ndigits != 15 && ndigits != 16)
    {
        printf("Invalid.\n");
    }

    //getting individual digits for VISA 13dig
    if (ndigits == 13)
    {
        int digit13 = number % 10;
        long number2 = number / 10;

        int digit12 = number2 % 10;
        long number3 = number2 / 10;

        int digit11 = number3 % 10;
        long number4 = number3 / 10;

        int digit10 = number4 % 10;
        long number5 = number4 / 10;

        int digit9 = number5 % 10;
        long number6 = number5 / 10;

        int digit8 = number6 % 10;
        long number7 = number6 / 10;

        int digit7 = number7 % 10;
        long number8 = number7 / 10;

        int digit6 = number8 % 10;
        long number9 = number8 / 10;

        int digit5 = number9 % 10;
        long number10 = number9 / 10;

        int digit4 = number10 % 10;
        long number11 = number10 / 10;

        int digit3 = number11 % 10;
        long number12 = number11 / 10;

        int digit2 = number12 % 10;
        long number13 = number12 / 10;

        int digit1 = number13 % 10;

        //multiply every other digit by 2 starting with the 2nd to last
        digit122 = digit12 * 2;
        digit102 = digit10 * 2;
        digit82 = digit8 * 2;
        digit62 = digit6 * 2;
        digit42 = digit4 * 2;
        digit22 = digit2 * 2;

    }
    //getting individual digits for AMEX
    else if (ndigits == 15)
    {
        int digit15 = number % 10;
        long number2 = number / 10;

        int digit14 = number2 % 10;
        long number3 = number2 / 10;

        int digit13 = number3 % 10;
        long number4 = number3 / 10;

        int digit12 = number4 % 10;
        long number5 = number4 / 10;

        int digit11 = number5 % 10;
        long number6 = number5 / 10;

        int digit10 = number6 % 10;
        long number7 = number6 / 10;

        int digit9 = number7 % 10;
        long number8 = number7 / 10;

        int digit8 = number8 % 10;
        long number9 = number8 / 10;

        int digit7 = number9 % 10;
        long number10 = number9 / 10;

        int digit6 = number10 % 10;
        long number11 = number10 / 10;

        int digit5 = number11 % 10;
        long number12 = number11 / 10;

        int digit4 = number12 % 10;
        long number13 = number12 / 10;

        int digit3 = number13 % 10;
        long number14 = number13 / 10;

        int digit2 = number14 % 10;
        long number15 = number14 / 10;

        int digit1 = number15 % 10;
    }

    //getting individual digits for VISA 16dig or MASTERCARD
    else if (ndigits == 16)
    {
        int digit16 = number % 10;
        long number2 = number / 10;

        int digit15 = number2 % 10;
        long number3 = number2 / 10;

        int digit14 = number3 % 10;
        long number4 = number3 / 10;

        int digit13 = number4 % 10;
        long number5 = number4 / 10;

        int digit12 = number5 % 10;
        long number6 = number5 / 10;

        int digit11 = number6 % 10;
        long number7 = number6 / 10;

        int digit10 = number7 % 10;
        long number8 = number7 / 10;

        int digit9 = number8 % 10;
        long number9 = number8 / 10;

        int digit8 = number9 % 10;
        long number10 = number9 / 10;

        int digit7 = number10 % 10;
        long number11 = number10 / 10;

        int digit6 = number11 % 10;
        long number12 = number11 / 10;

        int digit5 = number12 % 10;
        long number13 = number12 / 10;

        int digit4 = number13 % 10;
        long number14 = number13 / 10;

        int digit3 = number14 % 10;
        long number15 = number14 / 10;

        int digit2 = number15 % 10;
        long number16 = number15 / 10;

        int digit1 = number16 % 10;
    }

    //calculate checksum


    //reports if the card is an AMEX, VISA or MASTERCARD

}