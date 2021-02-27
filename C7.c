//Write a Program to implement String length function in C(Strlen).

#include <stdio.h>

int strlen(char x[]);

int main()
{
char str[10];

printf("enter the string");
scanf("%s", &str);

printf("The length of the string is : %d", strlen(str) );
}

int strlen(char x[])
{
    int count=0;
    for(int i = 0; x[i] != '\0'; i++){
        
        count++;
    }
    return count;
}
