#include<stdio.h>
int main(){
int age = 22;
int *ptr = &age;
int _age = *ptr;
// printf("%d \n",&age);   // & => address
// printf("%d \n",*ptr);
// printf("%d \n",_age);
// %p => pointer
// %u => unsigned int

1;//Address
printf("%p \n",&age);
printf("%u \n",&age);

printf("%u \n",ptr);
printf("%u \n",&ptr);


2;//Value
printf("%d",*(&age));




}