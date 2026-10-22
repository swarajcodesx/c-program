#include <stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d"," is greater");
    }
    else if(iSecond > iFirst)
    {
        printf("%d", "is Greater");
    }
    else
    {
        printf("both number are equal");
    }

}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter two number:");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}