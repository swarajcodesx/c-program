#include<stdio.h>

int Display (int iNo )
{
    if (iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("demo");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}