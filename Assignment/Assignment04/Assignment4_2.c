#include <stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
   
 
   if(iValue%2==0)
   {
        printf("even Number");
   }
   else 
   {
        printf("odd  Number");
   }
 
}

int main()
{
    int iValue = 0;

    printf("Enter  number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}