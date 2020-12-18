#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int cents;
    // get input from the user... and repeat until the input is valid
    do
    {
        float change = get_float("Change owed: ");
        cents = round(change * 100);
    }
    while (cents <= 0);
    // calculate the number of coins and sum them up
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;
    int totalChange = quarters + dimes + nickels + pennies;
    printf("%i\n", totalChange);    // print the total number of coins
}
