#include <stdio.h>
#include <stdlib.h>

// Function to calculate factorial of a number
int factorial(int number)
{
    int result=1;
    int i;

    for(i=1;i<=number;i++)
    {
        result*=i;
    }
    return result;
}

int main()
{
    int i;

    // Print factorial table from 1 to 10
    for(i=1;i<=10;i++)
    {
        printf("%d!=%d\n",i,factorial(i));
    }
    return 0;
}

