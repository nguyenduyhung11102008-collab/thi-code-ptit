#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        double n;
        scanf("%lf", &n);
        
        // Tính 1/N và in ra với 15 chữ số sau dấu phẩy
        printf("%.15lf\n", 1.0 / n);
    }
    
    return 0;
}
