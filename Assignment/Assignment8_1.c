#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Medium");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}