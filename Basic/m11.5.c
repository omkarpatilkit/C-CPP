/* 1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4*/

#include <stdio.h>

void printArray(int r, int c)
{

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main()
{
    int iRow, iCol;

    printf("Please enter Rows and columns: ");
    scanf("%d %d", &iRow, &iCol);

    printArray(iRow, iCol);

    return 0;
}