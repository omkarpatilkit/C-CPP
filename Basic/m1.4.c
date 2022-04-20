// Accept one number and check whether is is divisible by 5 or not
#include <stdio.h>
#include <stdbool.h>

bool DivisibleBy5(int a)
{

    if ((a % 5) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int iVal;
    bool isDivisible = false;
    printf("Please enter a number:\n ");
    scanf("%d", &iVal);

    isDivisible = DivisibleBy5(iVal);
    if (isDivisible)
    {
        printf("%d is divisible by 5\n", iVal);
    }
    else
    {
        printf("%d is not divisible by 5\n", iVal);
    }
    return 0;
}