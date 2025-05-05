#include <stdio.h>
int main()
{
    int number;

    printf("Please Enter Any Number 0-100: ");
    scanf("%d", &number);

    if (number > 0, (number < 100))
    {
        if (number % 2 == 0)
        {
            printf("Your Number is Even");
        }

        else
        {
            printf("Your Number is Odd");
        }
    }
    return 0;
}