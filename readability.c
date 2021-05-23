#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //Get text input from user
    string text = get_string("Text: ");
    int len = strlen(text);
    
    //Count the number of letters in the entire text
    int lettercount = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            lettercount++;
        }
    }
    
    //Count the number of words in the entire text
    int wordscount = 0;
    for (int i = 0; i < len; i++)
    {
        if (isspace(text[i]))
        {
            wordscount++;
        }
    }
    int words = wordscount + 1; // +1 because a space is always between 2 words
    
    //Count the number of sentences in the text
    int sentencecount = 0;
    for (int i = 0; i < len; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentencecount++;
        }
    }
    
    //Calculating the Coleman-Liau index
    float L = lettercount * 100.0 / words; //average nº of letters per 100 words
    float S = sentencecount * 100.0 / words; //average nº of sentences per 100 words
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}