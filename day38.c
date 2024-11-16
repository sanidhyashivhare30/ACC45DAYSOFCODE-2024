#include <stdio.h>
#include <math.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int rounds = log2(N);
        int total_time = (rounds * A) + ((rounds - 1) * B);
        printf("%d\n", total_time);
    }

    return 0;
}