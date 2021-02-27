//Write a program to find the largest and smallest among three entered numbers and also display whether the identified largest/smallest number is even or odd.

#include<stdio.h>

int main(){

    int a,b,c, lar, sml;
    printf("Enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    if((a>b) && (a>c))
    {
        printf("Largest no. is: %d\n", a);
            lar = a;
        if (b>c){
           printf("smallest no. is: %d\n", c); 
           sml = c;
        }else{
            printf("smallest no. is: %d\n", b); 
            sml = b;
        }

    }
    else if((b>c) && (b>a))
    {
        printf("Largest no. is: %d\n", b);
        lar = b;
        if (a>c){
           printf("smallest no. is: %d\n", c); 
           sml = c;
        }else{
            printf("smallest no. is: %d\n", a); 
            sml = a;
        }

    }
     else
    {
        printf("Largest no. is: %d\n", c);
        lar = c;
        if (b>a){
           printf("smallest no. is: %d\n", a); 
           sml = a;
        }else{
            printf("smallest no. is: %d\n", b); 
            sml = b;
        }
    }
    printf("The Even and odd are as follows :\n");
    if(lar % 2 == 0){
                    
       printf("The largest %d no. is even \n", lar);             
    }else {
         printf("The largest %d no. is odd \n", lar);
    }
     if(sml % 2 == 0){
                    
       printf("The smallest %d no. is even \n", sml);             
    }else {
         printf("The smallest %d no. is odd\n ", sml);
    }

}