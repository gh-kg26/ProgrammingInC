// Write a program to take input of name, rollno and marks obtained by a student in 4 subjects of 100 marks each and display the name, rollno with percentage score secured.

#include <stdio.h>


int main()
{
    char name[10];
    int rollno, S1,S2,S3,S4;
    int percentage;
    printf("Enter the name and rollno :");
    scanf("%s%d", &name, &rollno);
    printf("Enter the  marks :");
    scanf("%d%d%d%d", &S1,&S2, &S3, &S4);
    int sum = S1+S2+S3+S4;
    percentage = sum/4;
    printf(" name:%s, rollno:%d, percentage:%d", name, rollno, percentage);
}