#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes is your average shower? \n");
    int shower = GetInt();
    printf("Minutes: %i\n", shower);
    printf("Bottles: %i\n", shower*12);
}