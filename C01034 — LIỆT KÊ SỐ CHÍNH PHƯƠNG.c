#include <stdio.h>
#include <math.h>

int main() {
    long long m, n;
    if (scanf("%lld %lld", &m, &n) != 2) return 0;
    
    
    long long start = ceil(sqrt(m));
    long long end = floor(sqrt(n));
    
    
    if (start > end) {
        printf("0\n");
    } else {
        printf("%lld\n", end - start + 1);
        
        for (long long i = start; i <= end; i++) {
            printf("%lld\n", i * i);
        }
    }
    
    return 0;
}
