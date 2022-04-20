#include <stdio.h>
#include <stdlib.h>

void SumOf(int arr[], int size)
{

    int iDigits = 0;
    int a;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {

        a = arr[i];
        while (a != 0)
        {
            iDigits = a % 10;
            sum = sum + iDigits;
            a = a / 10;
        }

        printf("%d\t", sum);
        sum = 0;
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
    SumOf(p, size);

    return 0;
}