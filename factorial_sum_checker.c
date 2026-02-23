#include <stdio.h>
#include <stdlib.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; ++i) fact *= i;
    return fact;
}

int main() {
    int N;
    printf("Enter range N: ");
    scanf("%d", &N);
    
    // Dynamic array for digits (handles up to 10-digit numbers safely)
    int *digits = malloc(20 * sizeof(int));  // Max 20 digits
    if (!digits) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int num = 1; num <= N; ++num) {
        int temp = num;
        int digit_count = 0;
        
        // Extract digits into dynamic array
        while (temp > 0) {
            digits[digit_count++] = temp % 10;
            temp /= 10;
        }
        
        long sum_fact = 0;
        for (int i = 0; i < digit_count; ++i) {
            sum_fact += factorial(digits[i]);
        }
        
        if (sum_fact == num) {
            printf("%d\n", num);
        }
    }
    
    free(digits);  // No leak
    return 0;
}
