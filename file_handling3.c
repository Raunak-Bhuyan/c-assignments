//program to write to a binary file using fwrite()
#include<stdio.h>
#include<stdlib.h>
struct threeNum{
    int n1,n2,n3;
};
int main()
{
    int n;
    //structure variable declared here
    struct threeNum num;
    FILE *fptr;
    if((fptr = fopen("C:\\program.bin", "wb")) == NULL)

{
    printf("error! opening file\n");
    exit(1);
}   
    for(n = 1; n<5; ++n)
    {
        num.n1 = 5;
        num.n2 = 5*n;
        num.n3 = 5*n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);
    
 return 0;
}