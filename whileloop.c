#include <stdio.h>

int main()
{
    char ch;

    while (1)
    {
        printf("Enter Any Vowel: ");
        scanf(" %c", &ch);

        if (ch == 'a')
        {
            printf("Vowel: %c\n", ch);
            break;
        }
        if (ch == 'e')
        {
            printf("Vowel: %c\n", ch);
            break;
        }
        if (ch == 'i')
        {
            printf("Vowel: %c\n", ch);
            break;
        }
        if (ch == 'o')
        {
            printf("Vowel: %c\n", ch);
            break;
        }
        if (ch == 'u')
        {
            printf("Vowel: %c\n", ch);
            break;
        }
        else
        {
            printf("Please enter a valid vowel.\n");
        }
    }

    return 0;
}
