#include <stdio.h>
#include <stdlib.h>

void display_array(int Arr[], int Len)
{
    for (int i = 0; i < Len; i++)
    {
        printf("%d ", Arr[i]);
    }
}

int diffOddEven(int Arr[], int Len)
{
    int odd = 0, even = 0;
    for (int i = 0; i < Len; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            even = even + Arr[i];
        }
        else
        {
            odd = odd + Arr[i];
        }
    }
}

int main()
{
    int Len, diff;
    int *p = NULL;

    printf("Please enter size of array: ");
    scanf("%d", &Len);

    p = (int *)malloc(Len * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (int i = 0; i < Len; i++)
    {

        printf("please enter element %d : ", i + 1);
        scanf("%d", &p[i]);
    }

    display_array(p, Len);
    diff = diffOddEven(p, Len);

    printf("\nDiff is %d ", diff);
    return 0;
}