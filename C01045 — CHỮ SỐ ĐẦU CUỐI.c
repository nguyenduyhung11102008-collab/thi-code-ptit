#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    // Lấy chữ số cuối cùng
    int chu_so_cuoi = n % 10;
    
    // Tìm chữ số đầu tiên bằng cách chia cho 10 liên tục
    while (n >= 10) {
        n /= 10;
    }
    int chu_so_dau = n;
    
    // In kết quả theo đúng định dạng ví dụ: chữ số đầu [khoảng trắng] chữ số cuối
    printf("%d %d\n", chu_so_dau, chu_so_cuoi);
    
    return 0;
}
