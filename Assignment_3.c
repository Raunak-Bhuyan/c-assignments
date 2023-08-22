#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 1025

void removeLeadingZeros(char *num) {
    int len = strlen(num);
    int start = 0;

    while (num[start] == '0' && start < len - 1) {
        start++;
    }

    if (start > 0) {
        memmove(num, num + start, len - start + 1);
    }
}

int compareStrings(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    if (len1 != len2) {
        return (len1 > len2) ? 1 : -1;
    }

    return strcmp(num1, num2);
}

char* divideLargeNumbers(char *numerator, char *denominator) {
    char *quotient = (char *)malloc(MAX_DIGITS * sizeof(char));
    char *remainder = (char *)malloc(MAX_DIGITS * sizeof(char));
    char *zero = "0";
    char *one = "1";

    quotient[0] = '\0';
    remainder[0] = '\0';

    if (compareStrings(numerator, denominator) < 0) {
        strcpy(quotient, zero);
        strcpy(remainder, numerator);
        return quotient;
    }

    while (compareStrings(numerator, denominator) >= 0) {
        int quotientDigit = 0;

        while (compareStrings(numerator, denominator) >= 0) {
            numerator = subtractLargeNumbers(numerator, denominator);
            quotientDigit++;
        }

        char digitStr[2];
        sprintf(digitStr, "%d", quotientDigit);
        strcat(quotient, digitStr);

        removeLeadingZeros(numerator);
    }

    free(remainder);
    return quotient;
}

int main() {
    char numerator[MAX_DIGITS];
    char denominator[MAX_DIGITS];

    printf("Enter the numerator: ");
    scanf("%s", numerator);

    printf("Enter the denominator: ");
    scanf("%s", denominator);

    char *quotient = divideLargeNumbers(numerator, denominator);
    printf("Quotient of the division: %s\n", quotient);

    free(quotient);

    return 0;
}

/*Time Complexity Analysis:
The time complexity of this program is not straightforward to define due to the nested loops and string manipulation. Generally, the time complexity is proportional to the number of iterations in the division process and the length of the numerator. In the worst case, the division process might iterate over each digit in the numerator, leading to a time complexity of O(N), where N is the length of the numerator.

Space Complexity Analysis:
The space complexity is primarily determined by the space used for storing the quotient and remainder strings. The space complexity is O(N), where N is the length of the numerator.*/