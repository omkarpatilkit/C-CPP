// accept number from user and display its multiplication of
// factors.

#include <stdio.h>

void displayFactorMulti(int a)
{
    int iMulti = 1;
    for (int i = 2; i <= a / 2; i++)
    {

        if (a % i == 0)
        {
            iMulti = iMulti * i;
            printf("%d\t", i);
        }
    }
    printf("%d", iMulti);
}

int main()
{

    int iNo;
    printf("Enter a number: \n");
    scanf("%d", &iNo);

    displayFactorMulti(iNo);

    return 0;
}