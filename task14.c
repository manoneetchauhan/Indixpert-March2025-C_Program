#include <stdio.h>
int main()
{
    int number;

    printf("Enter Any Number Between 1-50: ");
    scanf("%d", &number);

    if (number > 0 && number <= 50)
    {
        for (int m = 1; m <= 10; m++)
        {
            printf("%d \n", number * m);
        }
    }
    else
    {
        printf("Invalid Number");
    }
    return 0;
}