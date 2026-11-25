#include <stdio.h>

int main() {
    int t;
    // Đọc số lượng bộ test
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long n;
            scanf("%lld", &n);
            // In ra giá trị gấp đôi của N
            printf("%lld\n", n * 2);
        }
    }
    return 0;
}
