#include <stdio.h>

int main() {

    int num, test;
    unsigned long long fact = 1;

    printf("Enter number of test case : ");
    scanf("%d", &test);

    for(int j=1; j<=test; j++){

    	printf("Enter a positive integer: ");
    	scanf("%d", &num);

    	// Check if the number is negative
    	if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    	} else {
        // Calculate factorial
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    	}
    }

    return 0;
}
