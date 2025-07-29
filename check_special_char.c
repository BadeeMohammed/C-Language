// Program to check if a character is alphabet, digit, or special character

#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch;

    printf("Enter something to check if a character is alphabet, digit, or special character: ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        printf("It is an alphabet.\n");
    }
    
    else if (isdigit(ch))
    {
        printf("It is a digit.\n");
    }

    else if (ispunct(ch))
    {
        printf("It is a special symbol.\n");
    }
    
    else
    {
        printf("It is an unknown or control character.\n");
    }

    return 0;
}