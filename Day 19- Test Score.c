#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        if(Y % X == 0 && Y <= N * X) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}