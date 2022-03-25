// check if zero is there or not */
#include <stdio.h>
#include <stdbool.h>

bool checkForZero(int a)
{
    int iDigit = 0;
    while (a > 0)
    {
        iDigit = a % 10;
        a = a / 10;
        if (iDigit == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int iVal;
    bool containZero = false;

    printf("Please enter a number: \n");
    scanf("%d", &iVal);

    containZero = checkForZero(iVal);
    if (containZero)
    {
        printf("%d Contains zero\n", iVal);
    }
    else
    {
        printf("%d does not contain zero\n", iVal);
    }
    return 0;
}