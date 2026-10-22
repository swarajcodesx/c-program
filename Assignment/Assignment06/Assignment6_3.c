#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = fAmount * 10 / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Discount = %.2f\n", fDiscount);
        printf("Final Amount = %.2f", fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * 20 / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Discount = %.2f\n", fDiscount);
        printf("Final Amount = %.2f", fFinalAmount);
    }
    else
    {
        printf("Discount = 0.00\n");
        printf("Final Amount = %.2f", fAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}