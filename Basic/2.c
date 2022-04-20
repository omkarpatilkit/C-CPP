#include <stdio.h>

int add(int a1, int b1)
{
    return a1 + b1;
}

int main()
{

    int a;
    int b;
    int iRes;

    printf("Please enter the number a: \n");
    scanf("%d", &a);

    printf("Please enter the number b: \n");
    scanf("%d", &b);

    iRes = add(a, b);
    printf("Addition is %d", iRes);

    return 0;
}