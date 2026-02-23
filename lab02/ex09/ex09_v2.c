/* iaed26 - ist1118070 - lab02/ex09 */
#include <stdio.h>

int main() {
    int total_seconds;
    scanf("%d", &total_seconds);
    // total_seconds / 3600 % 1, total_seconds % 3600 / 60, total_seconds / 1 % 60
    printf("%02d:%02d:%02d\n", total_seconds / 3600, total_seconds % 3600 / 60, total_seconds % 60);
    return 0;
}