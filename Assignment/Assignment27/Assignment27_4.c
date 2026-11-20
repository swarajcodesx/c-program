/*
4. Write a program which accept string from user and check whether it contains vowels in it or not.

Input: "marvellous"

Output:TRUE

*/


#include<stdio.h>
#include<stdlib.h>


int checkVowel(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||
           str[i] == 'i' || str[i] == 'o' ||
           str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(checkVowel(str))
        printf("TRUE");
    else
        printf("FALSE");

    return EXIT_SUCCESS;
}