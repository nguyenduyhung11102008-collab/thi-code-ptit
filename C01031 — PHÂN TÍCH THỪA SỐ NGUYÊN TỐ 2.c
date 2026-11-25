#include <stdio.h>
#include <math.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int first = 1; 
    
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            if (!first) {
                printf("x"); 
            }
            printf("%d", i);
            first = 0; 
            n /= i;
        }
    }
    
    if (n > 1) {
        if (!first) {
            printf("x");
        }
        printf("%d", n);
    }
    printf("\n");
    
    return 0;
}
