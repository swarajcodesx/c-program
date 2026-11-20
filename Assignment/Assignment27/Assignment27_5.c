/*
5. Write a program which accept string from user and display it inn reverse order.

Input:

"Marvellous"

Output:

"SuollevraM"

*/


#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void reverse(char str[])
{
    int i, len;

    len = strlen(str);

    if(str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);

    return EXIT_SUCCESS;
}