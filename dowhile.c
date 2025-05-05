#include <stdio.h>

int main()
{
    char ch;
    int flag = 1;

    do
    {
        printf("Enter Any Vowels: ");
        scanf(" %c", &ch);

        if (ch == 'a')
        {
            printf("a \n");
            flag = 0;
        }
        else if (ch == 'e')
        {
            printf("e \n");
            flag = 0;
        }
        else if (ch == 'i')
        {
            printf("i \n");
            flag = 0;
        }
        else if (ch == 'o')
        {
            printf("o \n");
            flag = 0;
        }
        else if (ch == 'u')
        {
            printf("u \n");
            flag = 0;
        }

    } while (flag);

    return 0;
}
