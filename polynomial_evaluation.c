#include <stdio.h>
double power(double x, int q) {
    if (q == 0) {
        return 1;
    }
    double m = x;
    for (int i = 1; i < q; i++) {
        m*=x;
    }
    return m;
}
int main() {
    printf("請輸入浮點數x的值以及多項式含有的項數正整數y︰");
    double x;
    int y;
    scanf("%lf%d", &x, &y);
    double result = 0.0;
    double p[6];
    int q[6];
    for (int i = 0; i < y; i++) {
        scanf("%lf%d", &p[i], &q[i]);
        result += p[i] * power(x, q[i]);
    }
    printf("%lf\n", result);
}
