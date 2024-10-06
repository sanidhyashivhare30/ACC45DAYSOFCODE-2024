#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X >= Y) {
            printf("0\n");
        } else {
            int max_months = (Y - 1) / X;
            printf("%d\n", max_months);
        }
    }

    return 0;
}