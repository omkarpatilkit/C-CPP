/* A B C D
a b c d
A B C D
a b c d*/

#include <stdio.h>

void printArray(int r, int c)
{
    char ch = 'A';

    for (int i = 1; i <= r; i++)
    {
        if (i % 2 == 0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }

        for (int j = 1; j <= c; j++)
        {
            printf("%c ", ch);
            ch = ch + 1;
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