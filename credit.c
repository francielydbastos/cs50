#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Asks the user for the card number
    long cardnumber = get_long("Card Number: ");
    long cardnumbercopy = cardnumber;

    //Determines the length of the number provided
    int cardlength = 0;
    do
    {
        cardnumbercopy = cardnumbercopy / 10;
        cardlength++;
    }
    while (cardnumbercopy > 0);

    //Weeds out card numbers with invalid length
    if (cardlength != 13 && cardlength != 15 && cardlength != 16)
    {
        printf("INVALID \n");
    }
    
    else
    {
        //Stores single digits in an array. The digits stored are reversed for now :(
        int digits[cardlength];
        long cardnumber2 = cardnumber;
        int singleD;
    
        for (int i = 0; i < cardlength; i++)
        {
            singleD = cardnumber2 % 10; //When I was trying to store the digit directly into the array it wasn't working
            digits[i] = singleD;        //Probably because cardnumber is long and array is int???
            cardnumber2 = cardnumber2 / 10;
        }
    
        //Luhns algorithm to check if the card number is valid
        //Multiplying every other digit by 2, starting from the 2nd to last digit
        int sum = 0;
        int dig;
        int a;
        int b;
        
        for (int i = 1; i < cardlength; i = i + 2)
        {
            dig = digits[i] * 2;
            if (dig < 10)
            {
                sum = sum + dig;
            }
            else
            {
                a = dig % 10;
                b = dig / 10;
                sum = sum + a + b;
            }
        }
        
        //Sum of the digits that weren't multiplied by 2
        int sum1 = 0;
        
        for (int i = 0; i < cardlength; i = i + 2)
        {
            sum1 = digits[i] + sum1;
        }
        
        //TOTAL SUM!!!!!
        int sumcheck = sum + sum1;
        int check1 = sumcheck % 10;
        
        //Checking if card is valid and what is the company
        if (check1 != 0)
        {
            printf("INVALID \n");
        }
        
        else
        {
            //For MASTERCARD
            if (cardlength == 16 && digits[15] == 5 && (digits[14] == 1 || digits[14] == 2 || digits[14] == 3 || digits[14] == 4 
                    || digits[14] == 5))
            {
                printf("MASTERCARD\n");
            }
            //For AMEX
            else if (cardlength == 15 && digits[14] == 3 && (digits[13] == 4 || digits[13] == 7))
            {
                printf("AMEX\n");
            }
            //For VISA
            else if ((cardlength == 13 || cardlength == 16) && digits[cardlength - 1] == 4)
            {
                printf("VISA\n");
            }
        }
    }
}