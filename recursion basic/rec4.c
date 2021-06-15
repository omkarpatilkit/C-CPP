#include <stdio.h>

int StringLenLoop(char Arr[])
{

    int Len = 0;
    while (*Arr != '\0')
    {
        Len++;
        Arr++;
    }
    return Len;
}

int StringLen(char str[])
{
    static int Len = 0;
    if (*str != '\0')
    {
        Len++;
        str++;
        StringLen(str);
    }
    return Len;
}

int main()
{

    char Str[30];
    int iRet = 0;
    printf("Enter a String: ");
    scanf("%[^'\n']", Str);

    iRet = StringLen(Str);
    printf("%d This is the length of the string by Recursion.\n", iRet);

    iRet = StringLenLoop(Str);
    printf("%d This is the length of the string byLoop.\n", iRet);

    return 0;
}