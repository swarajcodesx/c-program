#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        printf("it is even number");
    }
    else
    {
        printf("it is odd number");
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

   return 0;
}