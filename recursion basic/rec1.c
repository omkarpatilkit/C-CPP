#include <stdio.h>

void Display(int no)
{
    if (no > 0)
    {
        printf("%d\n", no);
        no--;
        Display(no);
    }
}

void Display10(int no)
{

    if (no <= 10)
    {
        printf("%d\n", no);
        no++;
        Display10(no);
    }
}
int main()
{
    int iValue;
    printf("Enter the Value: \n");
    scanf("%d", &iValue);

    Display(iValue);
    Display10(iValue);
    printf("This is end of the main\n");

    return 0;
}