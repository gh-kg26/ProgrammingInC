// Write a program to check whether a number is Palindrome or not.

#include <stdio.h>

int main(){
    int pnum, rnum=0, remainder, n;
    printf("enter the pallendromic no.");
    scanf("%d", &n);
    pnum = n;
    while (n != 0) {
        remainder = n % 10;
        rnum = rnum * 10 + remainder;
        n /= 10;
    }
    if (pnum == rnum)
        printf("%d is a palindrome.", pnum);
    else
        printf("%d is not a palindrome.", pnum);

    return 0;
}

