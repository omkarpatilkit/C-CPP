// which accept number from user and print even factors of that
// number

#include <stdio.h>

void displayEvenFactor(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {

        if (a % i == 0 && i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{

    int iNo;
    printf("Please enter a number: \n");
    scanf("%d", &iNo);

    displayEvenFactor(iNo);

    return 0;
}