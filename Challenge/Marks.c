#include<stdio.h>
int main(){
       int marks;
       printf("Enter your marks: ");
       scanf("%d",&marks);
       if(marks>=90){
              printf("Outstanding");
       }
       else if(marks >= 80 && marks <= 90){
              printf("Excellent");

       }
       else if(marks>=70 && marks<=80){
              printf("Very Good");
       }
       else if(marks>=60 && marks<=70){
              printf("Good");
       }
       else{
              printf("Work hard");
       }
       return 0;


}