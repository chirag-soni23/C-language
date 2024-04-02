#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("coding.txt","w");

    // readfile

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // write file
    
    fputc('C',fptr);
    fputc('H',fptr);
    fputc('I',fptr);
    fputc('R',fptr);
    fputc('A',fptr);
    fputc('G',fptr);
    fclose(fptr);
    return 0;
}