#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;
int main(){
    stu s1;
    s1.roll = 16789;
    s1.cgpa = 9.6;
    strcpy(s1.name,"Chirag");

    printf(s1.name);
    return 0;
}