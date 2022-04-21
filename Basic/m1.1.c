// Program to divide two numbers

#include <stdio.h>

float Divide(int a, int b)
{

    if (a < b)
    {
        return -1; // to return -1
    }
    else
    {
        return a / b;
    }
}
// this is sub branch
int main()
{

    int iVal1, iVal2;
    float iRet;

    printf("Please enter first number: \n");
    scanf("%d", &iVal1);

    printf("Please enter second number: \n");
    scanf("%d", &iVal2);

    iRet = Divide(iVal1, iVal2);
    printf("the division is: %.2f", iRet);

    return 0;
}
