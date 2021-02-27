// Write a Program to multiply two 3 X 3 Matrices

#include <stdio.h>


int main(){

int arr1[3][3], arr2[3][3], arr[3][3];

printf("enter elements of arrray 1");

for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++){

        scanf("%d", &arr1[i][j]);
    }
}
printf("enter elements of arrray 2");

for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++){
        
        scanf("%d", &arr2[i][j]);
    }
}

for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++){
        
        arr[i][j] = arr1[i][j]*arr2[i][j];
    }
}


for(int i=0; i<3; i++) {
      for( int j=0;j<3;j++) {

         printf("%d ", arr[i][j]);
         if(j==2){
            printf("\n");
         }
      }
  }

}


