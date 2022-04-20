#include <stdio.h>
#include <stdlib.h>

void maxInArray(int arr[], int size)
{

    int a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    printf("Maximum number is : %d\n", a);
}

void minInArray(int arr[], int size)
{
    int a = arr[0];
    for (int i = 0; i < size; i++)
    {

        if (a > arr[i])
        {
            a = arr[i];
        }
    }
    printf("Minimum number is : %d\n", a);
}

int main()
{

    int size;
    int *p = NULL;
    printf("Pleaes enter size of array: ");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));
    if (p == NULL)
    {
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d elements of array: ", i + 1);
        scanf("%d", &p[i]);
    }

    maxInArray(p, size);
    minInArray(p, size);
    return 0;
}