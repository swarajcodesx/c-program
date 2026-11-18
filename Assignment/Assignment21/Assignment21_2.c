/*
input : iRow = 4     iCol  = 3

output: 1    2   3
        1    2   3
        1    2   3
        1    2   3

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0,k=0;

    for(i=1;i<=iRow;i++)
    {
        k = 1;

        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}