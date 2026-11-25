#include <stdio.h>
#include <math.h> 

void solve() {
    int n;
    scanf("%d", &n);
    
    int căn = (int)sqrt(n);
    
    if (căn * căn == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
