#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, K, count = 0;
        scanf("%d %d", &N, &K);

        for(int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);

            if((characteristic + K) % 7 == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}        