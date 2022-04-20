// program which accept number from user and return multiplication of all
// digits

#include <stdio.h>

void digitMulti(int a)
{
    int iDigit = 0;
    int iMult = 1;

    while (a != 0)
    {

        iDigit = a % 10;
        a = a / 10;
        iMult = iMult * iDigit;
    }
    printf("%d", iMult);
}

int main()
{

    int iNo;
    printf("Please enter a number: \n");
    scanf("%d", &iNo);

    digitMulti(iNo);
 
    return 0;
}