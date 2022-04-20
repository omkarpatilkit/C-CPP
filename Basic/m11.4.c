/* * # * #
 * # * #
 * # * #*/

#include <stdio.h>

void printArray(int r, int c)
{

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j % 2 == 0)
            {
                printf("# ");
            }
            else
            {
                printf("* ");
            }
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