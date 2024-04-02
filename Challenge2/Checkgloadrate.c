#include<stdio.h>
void calculateGoldValue(float gram , float purity,float todayGoldrate);
int main(){
       
       float gram;
       printf("Enter a gram of gold: ");
       scanf("%f",&gram);
       float purity;
       printf("Enter a purity of gold: ");
       scanf("%f",&purity);
       float todayGoldrate;
       printf("Enter a Gold rate of gold: ");
       scanf("%f",&todayGoldrate);
       calculateGoldValue(gram,purity,todayGoldrate);
       return 0;
}
void calculateGoldValue(float gram, float purity,float todayGoldrate){
       float calc = (gram * purity) * todayGoldrate;
       printf("Gold rate is %f",calc);

}