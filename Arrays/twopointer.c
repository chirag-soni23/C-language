#include<stdio.h>
int main(){
    int age = 20;
    char _age = 'a';
    int *ptr = &age;
    char *_ptr = &_age;
    // difference only same pointer not different
    printf("Difference = %u\n",ptr - _ptr);
    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);
    return 0;
}