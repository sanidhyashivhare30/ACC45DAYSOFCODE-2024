#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        int total_duration = 0;

        for(int i = 1; i <= N; i++) {
            if(i % 2 == 0) {
                total_duration += A;
            } else {
                total_duration += B;
            }
        }
        printf("%d\n", total_duration);
    }

    return 0;
}
