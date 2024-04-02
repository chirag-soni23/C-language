#include<stdio.h>
int main(){
    int marks[3];

    printf("Enter a physics marks: ");
    scanf("%d",&marks[0]);

    printf("Enter a maths marks: ");
    scanf("%d",&marks[1]);
    
    printf("Enter a chemistry marks: ");
    scanf("%d",&marks[2]);

    printf("Physics: %d, Mathmatics: %d, Chemistry: %d",marks[0],marks[1],marks[2]);
    return 0;
}