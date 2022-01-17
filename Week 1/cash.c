//Load library
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    //Prompt user input
    float x;
    do
    {
        x = get_float("Change owed: ");
    }
    while (x <= 0);

    //coin start at nil
    int coin = 0;
    int cents = round(x * 100);

    //Calculation quarters
    while (cents >= 25)
    {
        coin++;
        cents -= 25;
    }

    //Calculation dimes
    while (cents >= 10)
    {
        coin++;
        cents -= 10;
    }

    //Calculation nickels
    while (cents >= 5)
    {
        coin++;
        cents -= 5;
    }

    //Calculation pennies
    while (cents >= 1)
    {
        coin++;
        cents -= 1;
    }

    //Print no. coins
    printf("%i\n", coin);
}
