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
    struct student *ptr = &s1;
    printf("student roll = %d\n",(*ptr).roll);
    printf("student -> cgpa = %d\n",ptr->cgpa);
    printf("student -> name = %d\n",ptr->name);
    printf("student -> roll = %d\n",ptr->roll);
    return 0;
}