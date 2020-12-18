// in this program we will need string header file
#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
    // get the text from the user
    string text = get_string("Text: ");
    // initialize variables
    long letters = 0;
    long words = 1;
    long sentences = 0;
    // loop through the text, and increment the number of letters, words and sentences
    // based on the conditions described
    for (int i = 0, n = 0; n = strlen(text), i < n; i++)
    {
        if (text[i] == ' ')     // if there is a space, increment words
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')    // if any of these appear, the sentence has ended
        {
            sentences++;
        }
        else if (((int)text[i] >= 65 && (int)text[i] <= 90) || ((int)text[i] >= 97
                 && (int)text[i] <= 122))     // otherwise, check for alphabet letters using ASCII values
        {
            letters++;
        }
    }
    // get the value of L and S
    float L = (100.0 * (float)letters) / (float)words;
    float S = (100.0 * (float)sentences) / (float)words;

    // evaluate using the expression given
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // print the output based on the conditions given
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index < 16)
    {
        printf("Grade %i\n", index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}