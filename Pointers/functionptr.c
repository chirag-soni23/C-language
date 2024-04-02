#include<stdio.h>
void square(int n);
void _square(int* n);
int main(){

       int number = 4;
       square(number);
       printf("Number is %d \n",number);
       _square(&number);
       printf("Number is %d \n",number);

       return 0;


}
// Call by value;
void square(int n){
       n = n * n;
       printf("Square %d\n",n);
}
// Call by refrence;
void _square(int* n){
       *n = (*n) * (*n); //  4 * 4
       printf("__Square %d \n",*n);


}