#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int chan = 0, le = 0;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            chan++;
        } else {
            le++;
        }
        n /= 10;
    }
    
    printf("%d %d\n", le, chan);
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
