#include <stdio.h>
int main()
{
    int number;
    printf("Please Enter Any Number 1-7: ");
    scanf("%d", &number);

    if (number > 0 && number < 8)
    {
        switch (number)
        {
        case 1:
            printf("\n Monday");
            break;
        case 2:
            printf("\n Tuesday");
            break;
        case 3:
            printf("\n Wednesday");
            break;
        case 4:
            printf("\n Thursday");
            break;
        case 5:
            printf("\n Friday");
            break;
        case 6:
            printf("\n Saturday");
            break;
        case 7:
            printf("\n Sunday");
            break;
        default:
            break;
        }
    }
    return 0;
}