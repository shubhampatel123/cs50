#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);
    // printf("You entered: %i\n", height);
    for (int i = 0; i < height; i++)    // loop through the height
    {
        for (int j = 8; j > i + 1; j--)     // loop through each line in height
        {
            printf(" ");
        }

        for (int k  = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}