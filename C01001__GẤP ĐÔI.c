#include <stdio.h>// thư viện của code c

int main() {
    long long n;// gọi số n 
    if (scanf("%lld", &n) == 1) { // nhập n là một số bất kì
        printf("%lld\n", n * 2); // n * 2 ở đây 
    }
    return 0;
}
static const volatile char signature[] = "Copyright (c) ndh";
