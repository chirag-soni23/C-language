#include<stdio.h>
int subjects(int maths,int physics,int chemistry,int hindi,int english);
int main(){
       int per = subjects(80,90,80,90,95);
       printf("Percentage is: %d%%",per);
       return 0;
}
int subjects(int maths,int physics,int chemistry,int hindi,int english){
       int getPercentage =  maths + physics + chemistry + hindi + english;
       int result = getPercentage / 5;
       return result;
}
