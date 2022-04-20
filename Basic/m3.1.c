// which accept one number from user and print that number of
// even numbers on screen

#include <stdio.h>
#include <stdbool.h>

void display(int a)
{

    if (a <= 0)
    {
        return;
    }

    int i = 2;
    int j = 0;
    while (j < a)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int iNo;

    printf("please enter the number: \n");
    scanf("%d", &iNo); // send at address of iNo

    display(iNo);
    return 0;
}