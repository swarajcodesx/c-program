
/*
    Q3. Write a program which accepts string from user
    and toggle the case.
*/

#include<stdio.h>

void strtoggleex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]",arr);

    strtoggleex(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}
