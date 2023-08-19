#include <stdio.h>

long largestPrimeFactor(long n) {
    long factor = 2;
    while (n > 1) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return factor;
}

int main() {
    long number = 612852475143;
    long result = largestPrimeFactor(number);
    
    printf("%ld\n", result);
    
    return 0;
}
