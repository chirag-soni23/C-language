#include<stdio.h>
int sum(int n);
int main(){
       int result = sum(5);
       printf("Result is %d",result);

       return 0;
}
int sum(int n){
       if( n == 1){
              return 1;
       }
       return sum(n-1) + n;
}
