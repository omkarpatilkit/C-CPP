// which accept one number from user and print that number of
// even numbers on screen

#include <stdio.h>

void printEven(int a)
{
    if (a <= 0)
    {
        return;
    }

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iVal;
    printf("Please enter a number: \n");
    scanf("%d", &iVal);

    printEven(iVal);
    return 0;
}