// multiply all factors

#include <stdio.h>

void multiplyFactors(int a)
{
    int iMult = 1;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
            iMult = iMult * i;
        }
    }
    printf("\n");
    printf("%d", iMult);
}

int main()
{
    int iVal;

    printf("please entera number: ");
    scanf("%d", &iVal);

    multiplyFactors(iVal);
    return 0;
}