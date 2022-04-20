// accept number from user and return difference between
// summation of all its factors and non factors

#include <stdio.h>

int differenceFactor(int a)
{

    int iFactAdd = 0;
    int iNonFactAdd = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            iFactAdd = iFactAdd + i;
        }
        else
        {
            iNonFactAdd = iNonFactAdd + i;
        }
    }
    printf("Fact add: %d \n", iFactAdd);
    printf("non-fact add: %d \n", iNonFactAdd);

    return iFactAdd - iNonFactAdd;
}

int main()
{
    int iNo, iRes;
    printf("please entera number:\n");
    scanf("%d", &iNo);

    iRes = differenceFactor(iNo);
    printf("The difference in Factor and non factor is: %d", iRes);

    return 0;
}