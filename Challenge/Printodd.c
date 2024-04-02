#include<stdio.h>
int main(){
       int n;
       do
       {
              printf("Enter your number: ");
              scanf("%d",&n);
              printf("%d \n",n);
              if(n % 2!=0){
                     break;
              }
              n++;
       } while (1);
       printf("Thank you");
       
}