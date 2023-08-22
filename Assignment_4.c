/*#include <stdio.h>
#include <stdlib.h>

double divideWithPrecision(int x, int y, int precision) {
    double result = (double)x / y;
    double multiplier = 1.0;
    
    for (int i = 0; i < precision; i++) {
        multiplier *= 10.0;
    }
    
    result *= multiplier;
    
    return result;
}

int main() {
    int x, y, precision;

    printf("Enter the numerator (x): ");
    scanf("%d", &x);

    printf("Enter the denominator (y): ");
    scanf("%d", &y);

    printf("Enter the precision (number of decimal places): ");
    scanf("%d", &precision);

    double result = divideWithPrecision(x, y, precision);
    printf("Result of %d / %d up to %d decimal places: %.*f\n", x, y, precision, precision, result);

    return 0;
}*/

// CPP program to compute division upto n
// decimal places.
#include <stdio.h>


void precisionCompute(int x, int y, int n)
{
	// Base cases
	if (y == 0) {
		printf("infinite \n");
		return;
	}
	if (x == 0) {
		printf("0 \n");
		return;
	}
	if (n <= 0) {
		// Since n <= 0, don't compute after
		// the decimal
		printf("%d", x/y);
		return;
	}

	// Handling negative numbers
	if (((x > 0) && (y < 0)) || ((x < 0) && (y > 0))) {
		printf("-");
		x = x > 0 ? x : -x;
		y = y > 0 ? y : -y;
	}

	// Integral division
	int d = x / y;

	// Now one by print digits after dot
	// using school division method.
	for (int i = 0; i <= n; i++) {
		printf("%d", d);
		x = x - (y * d);
		if (x == 0)
			break;
		x = x * 10;
		d = x / y;
		if (i == 0)
			printf(".");
}
}

// Driver Program
int main()
{
	int x,y,n;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);
    printf("enter n: ");
    scanf("%d", &n);
	precisionCompute(x, y, n);
	return 0;
}

/*Time complexity: O(n)
Auxiliary space: O(1)*/