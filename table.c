#include <stdio.h>
int main()
{
    int num;

    printf("Please Enter Any Number: ");
    scanf("%d", &num);

    printf("Your Number Table: \n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
        num * 1, num * 2, num * 3, num * 4, num * 5, num * 6, num * 7, num * 8, num * 9, num * 10);

    return 0;
}