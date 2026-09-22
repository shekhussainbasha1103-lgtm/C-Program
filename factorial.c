#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}