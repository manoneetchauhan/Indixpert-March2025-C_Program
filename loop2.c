#include <stdio.h>
int main()
{

    int number;
    int flag=0;
    printf("Please Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        if (i = number)
        {
            flag = 1;
            printf("Matched! \n");
        }
        else
        {
            printf("Not Matched! \n");
        }
    }
    return 0;
}