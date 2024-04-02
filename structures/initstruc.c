#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {1664,9.4,"Chirag"};
    printf("Student roll = %d\n",s1.roll);
    return 0;
}