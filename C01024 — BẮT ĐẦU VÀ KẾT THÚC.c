#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int chu_so_cuoi = n % 10; 
    
    
    while (n >= 10) {
        n /= 10;
    }
    int chu_so_dau = n;
    
    
    if (chu_so_dau == chu_so_cuoi) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
