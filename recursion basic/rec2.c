#include <stdio.h>

int SumRec(int no)
{
    static int sum = 0;
    if (no != 0)
    {
        sum = sum + (no % 10);
        no = no / 10;
        SumRec(no);
    }
    return sum;
}

int SumLoop(int no)
{
    int sum = 0;
    while (no != 0)
    {
        sum = sum + (no % 10);
        no = no / 10;
    }
    return sum;
}

int main()
{
    int iValue, iRet;
    printf("Enter the number to sum all elements: \n");
    scanf("%d", &iValue);

    iRet = SumRec(iValue);
    printf("%d this is sum by the recursion", iRet);
    printf("\n");
    iRet = SumLoop(iValue);
    printf("%d this is sum by the Loop", iRet);

    return 0;
}