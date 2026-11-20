/*
3. Accept character from user. If it is capital then display all the characters from the input characters till Z. 
If input character is small then print all the characters in reverse order till a. In other cases return directly

Input: Q

Output: QRSTUVWXYZ


*/


#include<stdio.h>
#include<stdlib.h>
 


void display(char ch)
{
    char i;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c", i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    display(ch);

    return 0;
}