/*
2. Accept character from user. If character is small display its corresponding capital character,
 and if it small then display its corresponding capital. In other cases display as it is.
*/


#include<stdio.h>
#include<stdlib.h>
 


void convert(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("Result = %c", ch);
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    convert(ch);

    return EXIT_SUCCESS;
}