/*
4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

Input:

Output: TRUE

Input: d

Output: FALSE


*/


#include<stdio.h>
#include<stdlib.h>
 


void check(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' ||
       ch == '$' || ch == '%' || ch == '^' ||
       ch == '&' || ch == '*')
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    check(ch);

    return EXIT_SUCCESS;
}