
/*
    Q5. Write a program which accepts string from user
    and reverse that string in place.

    Input:
    "abcd"

    Output:
    "dcba"

    Input:
    "abba"

    Output:
    "abba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}
