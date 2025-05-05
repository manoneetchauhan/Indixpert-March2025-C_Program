#include <stdio.h>
int main()
{
    int number;

    printf("Please Enter Any Number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        for (int m = 1; m <= 10; m++)
        {
            printf("%d\n", number * m);
        }
    }
    else
    {
        printf("Invalid Number ");
    }
    return 0;
}