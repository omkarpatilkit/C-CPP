// program which accept number from user and display its digits in reverse
// order

#include <stdio.h>

void displayDigits(int a)
{
    int iDigit = 0;
    while (a > 0)
    {
        iDigit = a % 10;
        a = a / 10;
        printf("%d ", iDigit);
    }
}

int main()
{
    int iValue;

    printf("pleas enter a number\n");
    scanf("%d", &iValue);

    displayDigits(iValue);

    return 0;
}