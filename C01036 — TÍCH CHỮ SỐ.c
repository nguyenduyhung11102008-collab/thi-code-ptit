#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int tich = 1;
    
    // Tách từng chữ số và nhân vào biến tich
    while (n > 0) {
        tich *= (n % 10);
        n /= 10;
    }
    
    printf("%d\n", tich);
    
    return 0;
}
