// accept number from user and print even factors of that
//    number

#include <stdio.h>

void displayFactors(int a)
{
    for (int i = 2; i <= a / 2; i++) // used a/2 to reduce time complexity
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
    printf("enter the number:\n");
    scanf("%d", &iNo);

    displayFactors(iNo);

    return 0;
}