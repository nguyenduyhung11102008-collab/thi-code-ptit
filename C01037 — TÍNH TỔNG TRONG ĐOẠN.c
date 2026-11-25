#include <stdio.h>

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) return 0;
    
    
    long long L = (a < b) ? a : b;
    long long R = (a > b) ? a : b;
    
   
    long long n = R - L + 1;
    
    
    long long tong = n * (L + R) / 2;
    
    printf("%lld\n", tong);
    
    return 0;
}
