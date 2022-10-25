#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int q, w, i;          // created integers named w, i!
    string key = argv[1]; // key = string array!

    for (i = 0; i < strlen(key); i++) // loopig for checking if character is alphabetical and 26 and not the same
    {
        if (!isalpha(key[i])) // checks if character alphabetical
        {
            printf("Key must only contain alphabetical characters \n"); // prints an error message if not alphabetical
            return 1;
        }
        else if (strlen(key) != 26) // checks if character less or more than 26
        {
            printf("Key must contain 26 characters. \n"); // prints an error message if less or more than 26
            return 1;
        }
        for (w = i + 1; w < strlen(key); w++) // loop for checking if character is repeated!
        {
            if (toupper(key[i]) == toupper(key[w])) // checks it is repeated or not. toupper helps an character to stand as it is, a = a; A = A!
            {
                printf("Key must not contain repeated characters \n"); // prints an error message if repeated
                return 1;
            }
        }
    }
    string gettext = get_string("plaintext: "); // get an input from the user

    printf("ciphertext: "); // prints ciphertext

    int get = strlen(gettext); // converting gettext string as an integer named get

    for (q = 0; q < get; q++) // checks each character
    {
        if (strlen(key) == 26) // checks 26 character from alphabet
        {
            if (isupper(gettext[q])) // checks character uppercase
            {
                int o = (gettext[q] - 'A'); // created an o integer

                if (isupper(key[o]))
                {
                    printf("%c", key[o]);
                }
                else
                {
                    printf("%c", (key[o] - 32));
                }
            }
            else
            {
                int o = (gettext[q] - 'a');
                if (islower(key[o]))
                {
                    printf("%c", key[o]);
                }
                else
                {
                    printf("%c", (key[o]) + 32);
                }
            }
        }
        else
        {
            printf("%c", gettext[q]);
        }
    }
    return 0;
}