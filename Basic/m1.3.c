
// Program to print 5 to 1 numbers on screen.

#include <stdio.h>

void Display(int a)
{

    for (int i = a; i > 0; i--)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int iVal;
    printf("Please enter the number: \n");
    scanf("%d", &iVal);

    Display(iVal);
    return 0;
}