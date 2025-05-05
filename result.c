#include <stdio.h>
int main()
{

    int english = 70;
    int hindi = 70;
    int maths = 60;
    float total = english + hindi + maths;
    float percentage = (total / 3);

    printf("percentage: %.2f%% \n", percentage);

    return 0;
}