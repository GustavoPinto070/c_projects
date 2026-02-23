/* iaed26 - ist1118070 - lab02/ex08 */
#include <stdio.h>

int main() {
    int n;
    float m = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        float temp;
        scanf("%f", &temp);
        m += temp;
    }
    m /= n;
    printf("%.2f\n", m);
    return 0;
}