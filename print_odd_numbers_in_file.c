// Program to write all the odd numbers form 1 to n in a file

#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("odd_num.txt", "w");

    int num;

    printf("Enter a number to print odd numbers ranging in it: ");
    scanf("%d", &num);

    fprintf(fptr, "The odd numbers ranging in %d are:\n", num);

    for (int i = 0; i < num; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);

    return 0;
}