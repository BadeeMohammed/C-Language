// Program to check whether a character is a vowel or consonant

#include <stdio.h>
#include <ctype.h>

int main()
{

    char alpha;

    printf("Enter an alphabet to check if it is a vowel or consonant: ");
    scanf(" %c", &alpha);

    if (!isalpha(alpha))
    {
        printf("The given input is not an alphabet.\n");
        return 0;
    }

    alpha = tolower(alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("It is a vowel.\n", alpha);
    }

    else
    {
        printf("It is a consonant.\n");
    }

    return 0;
}