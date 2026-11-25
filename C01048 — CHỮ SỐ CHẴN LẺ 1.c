#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int chan = 0, le = 0;
    
    // Tách và đếm từng chữ số lẻ, chẵn
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            chan++;
        } else {
            le++;
        }
        n /= 10;
    }
    
    // In kết quả theo đúng thứ tự: số chữ số lẻ -> số chữ số chẵn
    printf("%d %d\n", le, chan);
    
    return 0;
}
