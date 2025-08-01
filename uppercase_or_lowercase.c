// Program to check if a character is uppercase or lowercase

#include <stdio.h>
#include <ctype.h>

int main()
{

    char chr;

    printf("Enter a character(alphabet) to check if it uppercase or lowercase: ");
    scanf("%c", &chr);

    if (isalpha(chr))
    {
        if (isupper(chr))
        {
            printf("The given character is uppercase(capital).");
        }
        else
        {
            printf("The given character is lowercase(small).");
        }
    }
    else
    {
        printf("Please enter a correct character(alphabet).");
    }

    return 0;
}