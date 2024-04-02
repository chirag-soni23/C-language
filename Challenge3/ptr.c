#include<stdio.h>
int main(){
       int x;
       int *ptr;
       ptr = &x;
       *ptr = 0;
       printf("x -> %d \n",x);
       printf("*ptr -> %d \n\n",*ptr);

       // Very important =>
       *ptr += 5;
       printf("x -> %d \n",x);
       printf("*ptr -> %d \n\n",*ptr);

       // Very important =>
       (*ptr)++;
       printf("x -> %d \n",x);
       printf("*ptr -> %d \n",*ptr);

       return 0;
}