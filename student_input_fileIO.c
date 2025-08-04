// Program to input student details and store it in a file

#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    float cgpa;
    int age;

    printf("Enter name of student: ");
    scanf("%s", name);

    printf("Enter age of student: ");
    scanf("%d", &age);

    printf("Enter cgpa of student: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "name: %s\n", name);
    fprintf(fptr, "age: %d\n", age);
    fprintf(fptr, "cgpa: %f\n", cgpa);

    fclose(fptr);
    return 0;
}