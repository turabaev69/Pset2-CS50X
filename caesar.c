#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#pset2 Caesar solution of Cs50x
#adam50.com
#twitter : turabaev69
#github : turabaev69

int main(int argc, string argv[])
{
    // checks if the user inputs less than 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key \n"); // print Usage: ./caesar key if not = 2
        return 1;
    }

    string gettext = get_string("plaintext: "); // get an input from the user

    printf("ciphertext: "); // gives ciphertext

    for (int key = 0; key < strlen(argv[1]); key++) // looping through each character of the plaintext
    {
        // checks whether the user inputs less than 2 arguments or.. is not alphabetical character!
        if (isalpha(argv[1][key]))
        {
            printf("Usage: ./caesar key \n");
            return 1;
        }
    }

    int key = atoi(argv[1]) % 26; // atoi converts a string to an integer called key

    int b = strlen(gettext);

    for (int i = 0; i < b; i++) // for analysing every letter
    {
        if (gettext[i] >= 'a' && gettext[i] <= 'z') // checking if letter is lowercase
        {
            printf("%c", (((gettext[i] - 'a') + key) % 26) + 'a'); // print the result by lowercase
        }
        else if (gettext[i] >= 'A' && gettext[i] <= 'Z') // cheking if letter is uppercase
        {
            printf("%c", (((gettext[i] - 'A') + key) % 26) + 'A'); // print the result by uppercase
        }

        else
        {
            printf("%c", gettext[i]);
        }
    }

    printf("\n");

    return 1;
}