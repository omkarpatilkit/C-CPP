#include <stdio.h>

void Factor(int no)
{
    static int Cnt = 2;
    if (Cnt <= (no / 2))
    {
        if ((no % Cnt) == 0)
        {
            printf("%d\t", Cnt);
        }
        Cnt++;
        Factor(no);
    }
}

void FactorLoop(int no)
{
    int Cnt = 2;
    while (Cnt <= (no / 2))
    {
        if ((no % Cnt) == 0)
        {
            printf("%d\t", Cnt);
        }
        Cnt++;
    }
}

int main()
{
    int num = 0;
    printf("Enter the number to find its factor: ");
    scanf("%d", &num);

    Factor(num);
    printf("This result by Recursion\n");
    FactorLoop(num);
    printf("This result by Loop\n");
    return 0;
}