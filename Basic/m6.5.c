// /program which accept number from user and count frequency of such a
// digits which are less than 6.

#include <stdio.h>

void digitLessThan6(int a)
{

    int iDigits;
    int iRes = 0;
    while (a != 0)
    {

        iDigits = a % 10;
        a = a / 10;
        if (iDigits < 6)
        {
            iRes++;
        }
    }
    printf("%d ,is freq", iRes);
}

int main()
{

    int iNo;
    printf("Please enter a number: \n");
    scanf("%d", &iNo);

    digitLessThan6(iNo);
    return 0;
}