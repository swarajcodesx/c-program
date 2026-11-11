/*
1. Accept number of rows and number of columns from user and display below pattern.

Input: iRow = 5  iCol = 5

Output: 1    2     3     4    5
       -1   -2    -3    -4   -5
        1    2     3     4    5
       -1   -2    -3    -4   -5
    
 */

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,k=0;
       
    for (i=1;i<=iRow;i++)
    {
            if(i%2==0)
            {
               k = -1;
            }
            else
            {
                k = 1;   
            }

        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",k);
            if(i%2==0)
            {
                k--;    
            }
            else
            {
                k++;
            } 
        }       
        printf("\n");
    }                  
}
 
int main()
{
    int iValue1=0,iValue2 = 0;

    printf("enter number of rows:\n");
    scanf("%d",&iValue1);

    
    printf("enter number of Columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}