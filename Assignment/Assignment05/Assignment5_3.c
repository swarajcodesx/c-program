#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float iMarks)
{
    if(iMarks < 0 || iMarks > 100)
    {
        printf("Invalid Marks");
    }
    else if(iMarks >= 90)
    {
        printf("Grade A");
    }
    else if(iMarks >= 75)
    {
        printf("Grade B");
    }
    else if(iMarks >= 60)
    {
        printf("Grade C");
    }
    else if(iMarks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks:\n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}