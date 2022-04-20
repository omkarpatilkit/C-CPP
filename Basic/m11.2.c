/* 1 2 3
1 2 3
1 2 3
1 2 3 */

#include <stdio.h>

void printArray(int r, int c)
{

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ",j);
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