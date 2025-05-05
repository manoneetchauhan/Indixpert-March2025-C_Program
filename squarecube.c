#include <stdio.h>
int main()
{
    int a;
    int choice;

    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("Choose an Option: \n");

    printf("1 for Square: \n");

    printf("2 for Cube: \n");

    printf("Enter your Choice: \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Square of %d is %d\n", a, a * a);
    }
    else if (choice == 2)
    {
        printf("Cube of %d is %d\n", a, a * a * a);
    }
    return 0;
}