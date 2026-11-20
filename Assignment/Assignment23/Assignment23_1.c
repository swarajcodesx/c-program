
/*
    Q1. Write a program which accepts string from user
    and convert it into lower case.
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]",arr);

    strlwrx(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}
