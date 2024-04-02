#include <stdio.h>
int main()
{
    FILE *fptr;
    // Mode:- 👇
    // r -> read, rb -> read in binary, w -> write, wb -> write in binary, a -> append;
    fptr = fopen("coding.txt", "r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("Charcter = %d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("Charcter = %d \n",ch);

   
    fclose(fptr);
    // if (fptr == NULL)
    // {
    //     printf("File doesn't exit\n");
    // }
    // else
    // {
    //     fclose(fptr);
    // }
    return 0;
}