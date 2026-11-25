#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a == 0) {
            if (b == 0) {
                printf("NO\n");
            } else {
                double x = -c / b;
                if (x == 0.0) x = 0.0; 
                printf("%.2lf\n", x);
            }
        } else {
            double delta = b * b - 4 * a * c;
            if (delta < 0) {
                printf("NO\n");
            } else if (delta == 0) {
                double x = -b / (2 * a);
                if (x == 0.0) x = 0.0;
                printf("%.2lf\n", x);
            } else {
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                if (x1 == 0.0) x1 = 0.0;
                if (x2 == 0.0) x2 = 0.0;
                if (x1 > x2) {
                    printf("%.2lf %.2lf\n", x1, x2);
                } else {
                    printf("%.2lf %.2lf\n", x2, x1);
                }
            }
        }
    }
    return 0;
}
