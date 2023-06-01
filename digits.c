#include<stdio.h>
int main()
{
    int num, n_count=0;
    char ch;
    printf("enter the number ");
    scanf("%d", &num);
    scanf("%c", &ch);
while(1){
    if(ch){
        n_count++;
    }
}
    printf("the number of digits in the given number is: %d", n_count);
    return 0;


} 
