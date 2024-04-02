#include<stdio.h>
int main(){
    float price[3];
    printf("Enter a 1 prices: ");
    scanf("%f",&price[0]);
    printf("Enter a 2 prices: ");
    scanf("%f",&price[1]);
    printf("Enter a 3 prices: ");
    scanf("%f",&price[2]);
    printf("Total price 1: %f",price[0]+(0.18*price[0]));
    printf("Total price 2: %f",price[1]+(0.18*price[1]));
    printf("Total price 3: %f",price[2]+(0.18*price[2]));
},