#include<stdio.h>
int main(){
       int n;
       printf("Enter your number: ");
       scanf("%d",&n);
       for (int i = 1; i <= 10; i++){
              n *= i;
       }
              printf("%d \n",n);
       
}