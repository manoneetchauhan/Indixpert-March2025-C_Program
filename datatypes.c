#include <stdio.h>
int main()
{
    int age = 25;
    char grade = 'A';
    float height = 5.8;
    double pi = 3.141;

    printf("%d \n", age);
    printf("%c \n", grade);
    printf("%.1f \n", height);
    printf("%.3lf \n", pi);

    return 0;
}