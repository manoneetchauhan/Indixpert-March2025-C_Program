#include <stdio.h>
int main()
{
    int hindi;
    int english;
    int maths;
    int science;
    int total;
    float percentage;

    printf("please enter marks in hindi: ");
    scanf("%d", &hindi);

    printf("please enter marks in english: ");
    scanf("%d", &english);

    printf("please enter marks in maths: ");
    scanf("%d", &maths);

    printf("please enter marks in science: ");
    scanf("%d", &science);

    printf("Hindi: %d \n",hindi);
    printf("English: %d \n",english);
    printf("Maths: %d \n",maths);
    printf("Science: %d \n",science);

    total = hindi + english + hindi + science;
    percentage = (total/400.0) * 100;

    printf("total marks: %d \n", total);
    printf("percentage: %.2f%% \n", percentage);

    return 0;
}