#include<stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0; 
    
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", n * n);
    }
    return 0;
}
