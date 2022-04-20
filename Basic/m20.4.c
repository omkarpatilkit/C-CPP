#include <stdio.h>
#include <stdlib.h>

void check3Digits(int arr[], int size)
{

    int iDigits = 0;
    int a;

    for (int i = 0; i < size; i++)
    {

        a = arr[i];
        while (a != 0)
        {
            iDigits++;
            a = a / 10;
        }
        if (iDigits == 3)
        {
            printf("%d\t", arr[i]);
        }

        iDigits = 0;
    }
}

int main()
{
    int size;
    int *p;

    printf("Please enter size of array: ");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));
    if (p == NULL)
    {
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d array element: ", i + 1);
        scanf("%d", &p[i]);
    }
    check3Digits(p, size);

    return 0;
}