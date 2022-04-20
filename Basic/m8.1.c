//$ * $ * $ * $ * $ *

#include <stdio.h>

void printPattern(int a)
{

    for (int i = 1; i <= a; i++)
    {
        printf("$ * ");
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