#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);

        int minAttacks;

        if(Y >= H) {
            minAttacks = 1;
        } else {
            H -= Y;
            minAttacks = 1;

            if(H > 0) {
                minAttacks += (H + X - 1) / X;
            }
        }
        printf("%d\n", minAttacks);
    }

    return 0;
}