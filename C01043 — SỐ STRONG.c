#include <stdio.h>

// Mảng lưu sẵn giai thừa từ 0! đến 9!
int gia_thua[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int temp = n;
    int tong = 0;
    
    // Tách từng chữ số và cộng dồn giai thừa
    while (temp > 0) {
        int chu_so = temp % 10;
        tong += gia_thua[chu_so];
        temp /= 10;
    }
    
    // Kiểm tra số Strong
    if (tong == n) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
