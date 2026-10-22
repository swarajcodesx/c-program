#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

char CheckVowel(char cValue)
{
    if(cValue=='a'||cValue=='e'||cValue=='i'||
        cValue=='o'||cValue=='u')
    {
        return true;
    }
    else 
    {
        return false;
    } 
}

int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if (bRet == true)
    {
        printf("it is Vowel");
    }
    else
    {
        printf("it is not Vowel");
    }

    return 0 ;

}