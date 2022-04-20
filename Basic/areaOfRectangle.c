#include <stdio.h>

int area(int a, int b)
{

    return a * b;
}

int main()
{

    int a;
    int b;
    int res;

    printf("Please enter the height of rectangle: ");
    scanf("%d", &a);

    printf("Please enter the width of rectangle: ");
    scanf("%d", &b);

    res = area(a, b);
    printf("area of rectangle is %d", res);
    

    return 0;
}
