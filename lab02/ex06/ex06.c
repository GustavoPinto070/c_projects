/* iaed26 - ist1118070 - lab02/ex06 */
#include <stdio.h>

int main() {
    int n;
    float min, max;
    scanf("%d %f", &n, &min);
    max = min;
    for (int i = 1; i < n; i++) {
        float temp;
        scanf("%f", &temp);
        if (temp < min) {
            min = temp;
        }
        if (temp > max) {
            max = temp;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}