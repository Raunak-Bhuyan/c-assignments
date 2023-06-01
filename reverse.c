#include<stdio.h>

void reverse(char *str);
int main(){
 char str[100];
 printf("enter the string: ");
 scanf("%s", str);
 printf("reverse of the string: ");
 reverse(str);
 return 0;

}
void reverse(char *str)
{
    if(*str)
    {
        reverse(str + 1);
        printf("%c", *str);
    }
}