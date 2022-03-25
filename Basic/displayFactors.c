// Display factors for

#include <stdio.h>

void displayFactor(int a)
{

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
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

    displayFactor(iVal);

    return 0;
}