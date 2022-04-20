/*
program which accept number from user and display its factors in
decreasing order.
*/

#include <stdio.h>

void factorDescresing(int a)
{

    for (int i = a / 2; i >= 2; i--)
    {
        if (a % i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{

    int iNo;
    printf("Enter number: \n");
    scanf("%d", &iNo);

    factorDescresing(iNo);

    return 0;
}