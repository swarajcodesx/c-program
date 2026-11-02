#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCount = 1; iCount <= iNo; iCount++)
    {
        printf("$\t*\t");
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}