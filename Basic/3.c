#include <stdio.h>

int main()
{

    char unit;

    printf("Please provide unit for temp: ");
    scanf("%c", &unit);

    if ('a' <= unit && unit <= 'z')
    {
        unit = unit - 32;
    }

    switch (unit)
    {
    case 'C':
        printf("temp in C");
        break;

    case 'K':
        printf("temp in K");
        break;

    case 'F':
        printf("temp in F");
        break;

    default:
        printf("Please enter a valid input");
    }

    return 0;
}