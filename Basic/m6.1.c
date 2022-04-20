// program which accept number from user and display its digits in reverse
// order

#include <stdio.h>

void displayDigit(int a)
{
    int iDigit;
    while (a != 0) // 1234
    {
        iDigit = a % 10; // iDigit = 4  a = 123

        a = a / 10;
        printf("%d\n", iDigit);
    }
}

int main()
{

    int iNo;
    printf("Please enter a number: \n");
    scanf("%d", &iNo);

    displayDigit(iNo);

    return 0;
}