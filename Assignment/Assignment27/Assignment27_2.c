/*
2. Write a program which accept string from user and count number of small characters.

Input:

"Marvellous"

Output: 9


*/


#include<stdio.h>
#include<stdlib.h>

void countSmall(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
    }

    printf("Small characters = %d", count);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countSmall(str);

    return EXIT_SUCCESS;
}