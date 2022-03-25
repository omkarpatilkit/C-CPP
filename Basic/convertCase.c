// convert case

#include <stdio.h>

void convertCase(char ch)
{

    if ('a' <= ch <= 'z')
    {
        ch = ch - 32;
    }
    else if ('A' <= ch <= 'Z')
    {
        ch = ch + 32;
    }
    else
    {
        printf("Please enter a valid character");
    }
    printf("%c", ch);
}

int main()
{

    char iChar;

    printf("Please enter a char: ");
    scanf("%c", &iChar);

    convertCase(iChar);

    return 0;
}