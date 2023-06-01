#include<stdio.h>

/*void reverse(char *str)
{
  int i=0; 
int len = strlen(str);
    printf("reversed string is: ");
    for(i = len - 1; i>= 0; i++)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    char str1[100];
    printf("enter the string: ");
    scanf("%d", str1);

    reverse(&str1);
    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
