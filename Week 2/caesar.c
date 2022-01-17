#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Validate the length of argument vector
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Define the key - second string from argv
    string key = argv[1];

    //Validate the data type of argument vector
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //Convert string key to int
    int k = atoi(key);

    //Prompt user to enter plain text
    string plain = get_string("plaintext: ");

    //Print ciphered text
    printf("ciphertext: ");

    //Converting plain to ciphered text
    for (int i = 0; i < strlen(plain); i++)
    {
        //Upper case
        if (isupper(plain[i]))
        {
            printf("%c", (((plain[i] - 65) + k) % 26) + 65);
        }

        //Lower case
        else if (islower(plain[i]))
        {
            printf("%c", (((plain[i] - 97) + k) % 26) + 97);
        }

        //Non-alphabets
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}
