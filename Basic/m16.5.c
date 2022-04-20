/*
 * * * * * *
 * # # # * *
 * # # * $ *
 * # * $ $ *
 * * $ $ $ *
 * * * * * *
 */

#include <stdio.h>

void displayPattern(int row, int col)
{

    for (int i = 1; i <= row; i++)
    {
        int a = 1;

        for (int j = 1; j <= col; j++)
        {

            if (i == j || i == 1 || j == 1 || i == row || j == col)
            {
                printf("%d ", a);
            }

            else
            {
                printf("  ");
            }
            a = a + 1;
        }
        printf("\n");
    }
}

int main()
{
    int iRow, iCol;
    printf("Please enter rows and columns: ");
    scanf("%d %d", &iRow, &iCol);

    displayPattern(iRow, iCol);
    return 0;
}