
/*
    Q4. Write a program which accepts string from user
    and display only digits from that string.
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]",arr);

    DisplayDigit(arr);

    printf("\n");

    return 0;
}
