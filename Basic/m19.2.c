#include <stdio.h>
#include <stdlib.h>

void checkNumberExists(int arr[], int size, int num)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("%d exists at Location: %d\n", num, i + 1);
            return;
        }
    }
    printf("Given number %d does not exist", num);
}

int main()
{

    int size;
    int *p;
    int checkNumber;

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

    printf("Plesae enter the number to checkNumber: ");
    scanf("%d", &checkNumber);

    checkNumberExists(p, size, checkNumber);
    return 0;
}