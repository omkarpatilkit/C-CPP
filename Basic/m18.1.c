#include <stdio.h>
#include <stdlib.h>

void frequencyOfOddEven(int arr[], int size)
{

    int oddFreq = 0, EvenFreq = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            EvenFreq++;
        }
        else
        {
            oddFreq++;
        }
    }

    printf("EvenFreq = %d\n", EvenFreq);
    printf("OddFreq = %d\n", oddFreq);
}

int main()
{

    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int *p = NULL;
    p = (int *)malloc(size * sizeof(int));
    if (p == NULL)
    {
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &p[i]);
    }

    frequencyOfOddEven(p, size);

    return 0;
}