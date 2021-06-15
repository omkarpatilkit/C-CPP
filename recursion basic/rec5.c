#include <stdio.h>
#include <stdlib.h>

int SumEleLoop(int Arr[], int no)
{
    int sum = 0;
    for (int i = 0; i < no; i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}

int SumEle(int Arr[], int no)
{
    static int sum = 0;
    static int i = 0;
    if (i < no)
    {
        sum = sum + Arr[i];
        i++;
        SumEle(Arr, no);
    }
    return sum;
}

int main()
{

    int *Arr = NULL;
    int iSize = 0, iRet = 0;

    printf("Enter the size of3 the array: ");
    scanf("%d", &iSize);

    Arr = (int *)malloc(iSize * sizeof(int));
    if (Arr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (int i = 0; i < iSize; i++)
    {
        printf("Arr %d: ", i);
        scanf("%d", &Arr[i]);
    }

    iRet = SumEle(Arr, iSize);
    printf("%d this is the addition by recursion\n", iRet);

    iRet = SumEleLoop(Arr, iSize);
    printf("%d this is the addition by Loop\n", iRet);
    free(Arr);
    return 0;
}