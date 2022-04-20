// -4 -3 -2 -1 0 1 2 3 4

#include <stdio.h>

void printPattern(int a)
{
    if (a < 0)
    {
        a = (-1) * a;
    }

    for (int i = (-1) * a; i <= a; i++)
    {
        printf("%d ", i);
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