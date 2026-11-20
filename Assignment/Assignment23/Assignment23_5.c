
/*
    Q5. Write a program which accepts string from user
    and count number of white spaces.
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n",iRet);

    return 0;
}
