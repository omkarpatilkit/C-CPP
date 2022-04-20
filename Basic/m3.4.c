// Accept one character from user and convert case of that character.

#include <stdio.h>

void convertCase(char c)
{

    if ('a' <= c <= 'z')
    {
        c = c - 32;
        printf("%c", c);
    }
    else if ('A' <= c <= 'Z')
    {
        c = c + 32;
        printf("%c", c);
    }
}

int main()
{

    char iChar;
    printf("Enter a character to change case: \n");
    scanf("%c", &iChar);

    convertCase(iChar);

    return 0;
}