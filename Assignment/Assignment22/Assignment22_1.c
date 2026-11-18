/*
input : 5

output: A    B   C   D   E

          
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
    char ch ='\0';
    ch='A';

     for(i=1;i<=iNo;i++)
        {
            printf("%c\t",ch);
            ch++;
        }    
}

int main()
{
    int iValue=0;

    printf("Enter the number of elments:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}