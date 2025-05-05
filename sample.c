#include <stdio.h>
int main()
{
    int number1 = 1000;
    int number2 = 500;
    int sum = number1 + number2;
    int subtract = number1 - number2;
    int product = number1 * number2;

    printf("%d + %d = %d \n", number1, number2, sum);
    printf("%d - %d = %d \n", number1, number2, subtract);
    printf("%d * %d = %d \n", number1, number2, product);

    return 0;
}
