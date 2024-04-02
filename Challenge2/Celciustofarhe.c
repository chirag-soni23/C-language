#include<stdio.h>
float convertTemp(float celsius);
int main(){
       float result = convertTemp(0);
       printf("Far: %f",result);
       // return 0;
}
float convertTemp(float celsius){
       float far = celsius * (9/5) + 32;
       return far;
}