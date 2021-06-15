/*
    iRow = 4
    iCol = 3
    *   *   *
    *   *   *
    *   *   *
    *   *   *
 */

#include <stdio.h>

void Display(int iCol)
{
    for (int i = 1; i <= iCol; i++)
    {
        printf("*\t");
    }
    printf("\n");
}

void DisplayRec(int iRow, int iCol)
{

    static int i = 1, j = 1;
    if (i <= iRow)
    {
        Display(iCol);
        i++;
        DisplayRec(iRow, iCol);
    }
}

void DisplayLoop(int iRow, int iCol)
{

    printf("\n");
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{

    int i, j;
    printf("Please enter number of rows and columns.: ");
    scanf(" %d %d ", &i, &j); // need to fix this

    DisplayRec(i, j);
    printf("This is by recursion\n");

    DisplayLoop(i, j);
    printf("This is by Loop\n");

    return 0;
}