/*
$ * * * *
# $ * * *
# # $ * *
# # # $ *
# # # # $
 */

#include <stdio.h>

void displayPattern(int row, int col)
{

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= col; j++)
        {
            if (i < j)
            {
                printf("# ");
            }
            else if (i == j)
            {
                printf("$ ");
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
    printf("Please enter rows and columns: ");
    scanf("%d %d", &iRow, &iCol);

    displayPattern(iRow, iCol);
    return 0;
}