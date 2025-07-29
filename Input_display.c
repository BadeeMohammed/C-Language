// C program to input name, roll number, and marks, then display them

#include<stdio.h>

int main()
{
    char name[50];
    int roll_num, marks;
    
    printf("Enter your name : ");
    scanf("%s",name);

    printf("Enter your roll number : ");
    scanf("%d",&roll_num);

    printf("Enter your marks : ");
    scanf("%d",&marks);
    
    printf("Your name = %s\nYour roll number = %d\nYour marks = %d", name, roll_num, marks);
        
    return 0;
}