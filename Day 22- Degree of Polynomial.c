#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int degree = -1;

        for(int i = 0; i < N; i++) {

            int coefficient;
            scanf("%d", &coefficient);

            if (coefficient != 0) {
                degree = i;
            }
        }
        printf("%d\n", degree);
    }

    return 0;
}