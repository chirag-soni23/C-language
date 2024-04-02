#include<stdio.h>
void printAddress(int n);
int main(){
       int n = 4;
       printf("Address of n is: %p \n",&n);
             printAddress(n);

       return 0;
}
void printAddress(int n){
       printf("Address of n is: %p \n",&n);

}