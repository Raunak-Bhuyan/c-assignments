#include<stdio.h>
int anagram(char original[], char to_be_checked[])
{
    int x,y,i;
    int hash[256];
    for(i=0;i<256;i++)
    {
        hash[i]=0;
    }
    for(x=0;original[x]!='\0';x++);
    for(y=0;to_be_checked[y]!='\0';y++);
    if(x>y)
    return 0;
    for(int i=0; original[i]!='\0';i++)
    {
        hash[original[i]]=1;2
    }
    for(int i=0; to_be_checked[i]!='\0';i++)
    {
        if(hash[to_be_checked[i]]!=1)
        {
            return 0;
        }
    }
    return 1;
}
void main()
{
    char str1[64];
    char str2[64];
    printf("enter the first string:\t");
    scanf("%s",&str1);
    printf("enter the second string:\t");
    scanf("%s",&str2);

    if(anagram(str1, str2))
    {
        printf("%s is an anagram of %s", str1,str2);
    }
    else
    {
        printf("not an anagram");
    }
}