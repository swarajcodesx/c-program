/*
3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input:

"Marvellous"

Output: 6

(8-2)


*/


#include<stdio.h>
#include<stdlib.h>

int difference(char str[])
{
    int i, small = 0, capital = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
    }

    return small - capital;
}

int main()
{
    char str[100];
    int result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    result = difference(str);

    if(result < 0)
    {
        result = -result;
    }

    printf("Difference = %d", result);

    return EXIT_SUCCESS;
}