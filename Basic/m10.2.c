// 1 2 3 4 5 6 7 8

#include <stdio.h>

void printPattern(int a)
{
    if (a <= 0)
    {
        printf("Please enter a valid number.");
        return;
    }

    for (int i = a; i >= 1; i--)
    {
        printf("%d * ", i);
    }
}

int main()
{
    int iVal;

    printf("please enter a number: \n");
    scanf("%d", &iVal);

    printPattern(iVal);
    return 0;
}