// program which accept number from user and check whether it contains 0
// in it or not

#include <stdio.h>
#include <stdbool.h>

bool checkForZero(int a)
{

    int iDigit; //
    while (a != 0)
    {

        iDigit = a % 10;
        printf("%d\t", iDigit);
        if (iDigit == 0)
        {
            return true;
        }
        a = a / 10;
    }
    return false;
}

int main()
{

    int iNo;
    bool isContainZero = false;
    printf("Please enter a number: \n");
    scanf("%d", &iNo);

    isContainZero = checkForZero(iNo);
    if (isContainZero)
    {
        printf("%d, contains zero\n", iNo);
    }
    else
    {
        printf("%d, does not contain zero\n", iNo);
    }
    return 0;
}