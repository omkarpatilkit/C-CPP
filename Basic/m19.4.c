#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void checkNumberExists(int arr[], int size, int st, int en)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= st && arr[i] <= en)
        {
            printf("%d\t", arr[i]);
            found = true;
        }
    }
    if (!found)
    {
        printf("Element not found\n");
    }
}

int main()
{

    int size;
    int *p;
    int start, end;

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

    printf("Plesae enter the range: ");
    scanf("%d %d", &start, &end);

    checkNumberExists(p, size, start, end);
    return 0;
}