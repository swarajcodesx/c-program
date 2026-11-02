#include<stdio.h>
#include<stdlib.h>

int DollarTOINR(int iNo)
{
    int iCnt = 0;
    int iNr = 0;

    for(iCnt = 0; iCnt<= iNo; iCnt++)
    {
        iNr = iNo*70;
    }
    return iNr;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD :\n");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}