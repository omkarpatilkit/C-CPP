/* 1 2 3 4
1 * * 4
1 * * 4
1 2 3 4*/

#include <stdio.h>

void printArray(int r, int c)
{

    for (int i = 1; i <= r; i++)
    {
        int a = 1;
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c)
            {
                printf("%d ", a);
            }
            else
            {
                printf("* ");
            }
            a = a + 1;
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