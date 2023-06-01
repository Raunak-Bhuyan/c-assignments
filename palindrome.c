#include<stdio.h>
#include<stdlib.h>
void RevStr(char *str)
{
    int i, len;
    char temp;
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    str[len]='\a';
}
int main()
{
    int temp;
    char str[50], flag[50];
    printf("enter the string: \n");
    gets(str);
    for(int i=0; i<strlen(str);i++)
    {
        flag[i]=str[i];
    }
    flag[strlen(str)]='\0';
    RevStr(str);
    temp1=strcmp(flag,str);
    if(temp1 == 0)
    printf("palindrome\n");
    else
    printf("not a palindrome");
    return 0;
}