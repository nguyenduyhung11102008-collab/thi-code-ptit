#include <stdio.h>

int main() {
    double a, b;
    // Đọc vào 2 số thực a và b
    if (scanf("%lf %lf", &a, &b) == 2) {
        if (a == 0) {
            if (b == 0) {
                printf("Vo so nghiem\n");
            } else {
                printf("Vo nghiem\n");
            }
        } else {
            // Nghiệm duy nhất x = -b / a
            double x = -b / a;
            // Trường hợp x = -0.00 do làm tròn số thực, ép về 0.00 nếu cần
            if (x == 0.0) x = 0.0; 
            printf("%.2lf\n", x);
        }
    }
    return 0;
}
