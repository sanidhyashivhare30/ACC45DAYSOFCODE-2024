#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        if (X >= Y) {
            printf("%d\n", X - Y);
        } else {
            int distance = Y - X;
            printf("%d\n", (distance + 1) / 2);
        }
    }

    return 0;
}