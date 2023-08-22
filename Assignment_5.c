// C program for the above approach
#include <stdio.h>


// Naive iterative solution to calculate pow(x, n)
long power(int x, unsigned n)
{
	// Initialize result to 1
	long long pow = 1;

	// Multiply x for n times
	for (int i = 0; i < n; i++) {
		pow = pow * x;
	}

	return pow;
}

// Driver code
int main(void)
{

	int x;
	unsigned n;
    printf("enter the base: ");
    scanf("%d", &x);
    printf("enter the power: ");
    scanf("%d", &n);
	// Function call
	int result = power(x, n);
	printf("%d", result);

	return 0;
}
