#include<stdio.h>

void libcat(char str1[], char str2[], char dist)
{
    int i=0;
    int k=0;
    for(i = 0;str1[i]!="\0";i++)
    dist[k++]=str1[i];
    for(i=0;str2[i]!="\0";i++)
    dist[k++]=str2[i];
    dist[k]="\0";
}
int main()
{
    char str1[100]= "arif";
    char str2[100]= "jisan";
    int l1,l2;
    l1= length(str1);
    l2= length(str2);
    char*dist;
    dist= (char *)malloc(l1 + l2 + 1)*
    libcat(str1,str2,dist);
    free(dist);
    return 0;
}