#include<stdio.h>
#include<string.h>
// User defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    printf("Student1 \n");
    struct student s1;
    s1.roll = 3098;
    s1.cgpa = 9.8;
    // s1.name = "Chirag"
    strcpy(s1.name,"Chirag");
    printf("Student name =  %s\n",s1.name);
    printf("Student roll =  %d\n",s1.roll);
    printf("Student cgpa =  %f\n",s1.cgpa);


    printf("Student2 \n");
    struct student s2;
    s2.roll = 3099;
    s2.cgpa = 9.2;
    // s1.name = "Chirag"
    strcpy(s2.name,"Rahul");
    printf("Student name =  %s\n",s2.name);
    printf("Student roll =  %d\n",s2.roll);
    printf("Student cgpa =  %f\n",s2.cgpa);
    return 0;
}