#include<stdio.h>
int main(){
       int n;
       printf("Enter a number if you want to print table: ");
       scanf("%d",&n);
       for (int i = 1; i <= 10; i++)
       {
              if(i == 6){
                     continue;
              }
              printf("%d \n", n * i);
       }
       
       return 0;
}