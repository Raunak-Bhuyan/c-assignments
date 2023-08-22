#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 1025

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

char* multiplyLargeNumbers(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int resultLength = len1 + len2;
    int *result = (int *)calloc(resultLength, sizeof(int));

    reverseString(num1);
    reverseString(num2);

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            result[i + j] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j + 1] += result[i + j] / 10;
            result[i + j] %= 10;
        }
    }

    // Convert result to string
    char *resultStr = (char *)malloc(resultLength + 1);
    int idx = resultLength - 1;
    while (idx > 0 && result[idx] == 0) {
        idx--;
    }
    for (int i = idx, j = 0; i >= 0; i--, j++) {
        resultStr[j] = result[i] + '0';
    }
    resultStr[idx + 1] = '\0';

    free(result);

    return resultStr;
}

int main() {
    char num1[MAX_DIGITS];
    char num2[MAX_DIGITS];

    printf("Enter the first large number: ");
    scanf("%s", num1);

    printf("Enter the second large number: ");
    scanf("%s", num2);

    char *product = multiplyLargeNumbers(num1, num2);
    printf("Product of the two large numbers: %s\n", product);

    free(product);

    return 0;
}


/*Time Complexity Analysis:
The time complexity of this program is O(N*M), where N and M are the lengths of the two input numbers, respectively. The nested loops iterate over all pairs of digits from the two input numbers, and the multiplication and addition operations within the inner loop are constant time operations.

Space Complexity Analysis:
The space complexity is O(N+M), where N and M are the lengths of the two input numbers, respectively. This is mainly due to the space used by the result array, which can have a maximum length of N+M. Additionally, a few extra variables are used, but they occupy constant space regardless of the input size.*/