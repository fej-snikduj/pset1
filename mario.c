#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int h;
    do
    {
    printf("Height:");
    h = GetInt();
    }
    while (h<0 || h>23);
    for (int i=1; i<=h; i++)
    {
        for (int s=i; s<h; s++)
        {
            printf(" ");
        }
        for (int a=0; a<=i; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}