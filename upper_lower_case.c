// Program to check if the entered alphabet is upper case or lower case

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The entered number is a lower case character.");
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The entered number is a uppercase character.");
    }

    else
    {
        printf("Inappropriate character.");
    }

    return 0;
}