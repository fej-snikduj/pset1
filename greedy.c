#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float c;
    do
    {
    printf("How much change are you owed?:");
    c = GetFloat();
    }
    while (c < 0 );
    
    int cents = round(c*100);
    int quarters = cents/25;
    int leftover1 = cents %25;
    int dimes = leftover1/10;
    int leftover2 = leftover1 %10;
    int nickels = leftover2/5;
    int leftover3 = leftover2 %5;
    int pennies = leftover3;
    int totalcoins = quarters + dimes + nickels + pennies;
    printf("%i\n", totalcoins);
    //printf("Quarters %i \n", quarters);
    //printf("Dimes %i \n", dimes);
    //printf("Nickels %i \n", nickels);
    //printf("Pennies %i \n", pennies);
    //printf("Leftover1 %i \n", leftover1);
    //printf("Cents %i \n", cents);
    
}

