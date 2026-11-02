#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}