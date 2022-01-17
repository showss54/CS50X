#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


//Prompt User
int main(void)
{
    string text = get_string("Text: ");

    // Obtain Letters
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    // Obtain Words
    int words = 1;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isblank(text[i]))
        {
            words++;
        }
    }

    // Obtain Sentences
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    //Use Coleman-Liau index to calculate grade level
    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;
    int index = round(calculation);

    //Print grade level
    if (index > 16)
    {
        printf("Grade 16+\n");
    }

    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else
        printf("Grade %i\n", index);
}
