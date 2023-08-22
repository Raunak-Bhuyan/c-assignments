#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_DIGITS 1025

void reverseString(char *str){
    int length = strlen(str);
    for(int i = 0; i<length/2; i++){
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

char* addlargeNumbers(char *num1, char *num2){
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLength = (len1 > len2) ? len1 : len2;
    int carry = 0;
    char result[MAX_DIGITS] = {0};
    
    reverseString(num1);
    reverseString(num2);

    for(int i =0; i<maxLength; i++){
        int digit1 = (i < len1) ? (num1[i] - '0') : 0;
        int digit2 = (i < len2) ? (num2[i] - '0') : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[i] = (sum % 10) + '0';
    }

    if(carry > 0){
        result[maxLength] = carry + '0';
        maxLength++;
    }

    reverseString(result);
    return strdup(result);
}

int main(){
     char num1[MAX_DIGITS];
    char num2[MAX_DIGITS];

    printf("Enter the first large number: ");
    scanf("%s", num1);

    printf("Enter the second large number: ");
    scanf("%s", num2);

    char *sum = addlargeNumbers(num1, num2);
    printf("Sum of the two large numbers: %s\n", sum);

    free(sum);

    return 0;

}