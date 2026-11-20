/*
1. Write a program which accept string from user and count number of capital characters.

Input:

"Marvellous Multi OS"

Output:

4


*/


#include<stdio.h>
#include<stdlib.h>
 

void countCapital(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }

    printf("Capital characters = %d", count);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCapital(str);

    return EXIT_SUCCESS;
}