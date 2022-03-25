// Substract factors and non factors

#include <stdio.h>

int SubOfFactors(int a)
{
    int iFact = 0;
    int iNonFactor = 0;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {

            iFact = iFact + i;
        }
        else
        {
            iNonFactor = iNonFactor + i;
        }
    }
    printf("Non factors addition is: %d \n", iNonFactor);
    printf("Addition of facors is: %d \n", iFact);
    return iNonFactor - iFact;
}

int main()
{
    int iVal;
    int iRes;

    printf("please entera number: ");
    scanf("%d", &iVal);

    iRes = SubOfFactors(iVal);
    printf("Difference is : %d", iRes);
    return 0;
}