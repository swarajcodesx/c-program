/*
input : 4

output: #   1   *   #   2   *   #   3   *   #   4   *   

          
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0,k =0;
    k =1;
   

     for(i=1;i<=iNo;i++)
        {
            printf("#\t%d\t*\t",k);
            k++;
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