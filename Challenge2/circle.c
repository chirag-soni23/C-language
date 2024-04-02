#include<stdio.h>
#include<math.h>
float circleArea(float radius);
int main(){
       float radius;
       printf("Enter a radius  of a circle: ");
       scanf("%f",&radius);
       float result = circleArea(radius);
       printf("The result is: %f",result);
       
}
float circleArea(float radius){
       float rad =  M_PI * pow(radius,2);
       return rad;
}