#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
      iNo=-iNo;
    }

    for (i=2;i<=iNo*2;i=i+2)
    {
        printf("%d\t",i);
    }
}

int main()
{
     int iValue =0;

     printf("Enter number:\n");
     scanf("%d",&iValue);

     PrintEven(iValue);
     return 0;
}