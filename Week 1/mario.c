#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user input
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    //Pyramid
    //Loop of creating a new row
    for (int i = 0; i < n; i++)
    {
        //Loop of creating a space or #
        for (int j = 0; j < n; j++)
        {
            if(i + j < n - 1)
            printf(" ");
            else
            printf("#");
        }

        //Print next line
        printf("\n");
    }
}
