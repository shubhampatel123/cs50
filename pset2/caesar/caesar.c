// include all the header files you need
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    // check if the argument count is 2
    if (argc == 2)
    {
        // loop through the argument and check if any of the chars is not a digit
        string arg = argv[1];
        for (int i = 0, n = strlen(arg); i < n; i++)
        {
            if (!isdigit(arg[i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        //convert the key from string to integer
        int key = atoi(argv[1]);

        // ask the user for the plaintext
        string plaintext = get_string("Plaintext: ");
        printf("ciphertext: ");

        // loop through each character and shift it by the key
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (isupper(plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 'A') + key) % 26) + 'A');
            }
            else if (islower(plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 'a' + key) % 26) + 'a'));
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }

        printf("\n");
        return 0;
    }
    // if argument count is not 2, then throw an error
    else if (argc < 2 || argc > 2)
    {
        printf("This command requires 2 arguments!\n");
        return 1;
    }

}