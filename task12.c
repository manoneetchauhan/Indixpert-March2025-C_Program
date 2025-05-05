#include <stdio.h>
int main()
{

    int hindi, english, maths, total, division;
    float percentage;

    printf("Please Enter Marks in Hindi: ");
    scanf("%d", &hindi);

    printf("Please Enter Marks in English: ");
    scanf("%d", &english);

    printf("Please Enter Marks in Maths: ");
    scanf("%d", &maths);

    total = hindi + english + maths;
    percentage = (total / 300.0) * 100;

    printf("Total Marks: %d \n", total);
    printf("Percentage: %.2f%% \n", percentage);

    if (percentage >= 60)
        division = 1;
    else if (percentage >= 45)
        division = 2;
    else if (percentage >= 33)
        division = 3;
    else
        division = 4;

    switch (division)
    {
    case 1:
        printf("\n First Division");
        break;
    case 2:
        printf("\n Second Division");
        break;
    case 3:
        printf("\n Third Division");
        break;
    case 4:
        printf("\n Fail");
        break;
    default:
        break;
    }
    return 0;
}