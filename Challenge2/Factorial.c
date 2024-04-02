#include<stdio.h>
int factorial(int n);
int main(){
       int result = factorial(10);
       printf("Result is: %d",result);
       return 0;
}
int factorial(int n){
       // Base case
       if(n==0 || n==1){
              return 1;
       }
       // Recrusive function
       return factorial(n-1) * n;

}