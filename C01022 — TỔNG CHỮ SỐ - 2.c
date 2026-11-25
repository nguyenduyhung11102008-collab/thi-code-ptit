#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int tong = 0;
    while (n > 0) {
        tong += n % 10; 
        n /= 10;        
    }
    printf("%d\n", tong);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
