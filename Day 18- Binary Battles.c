#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int rounds = 0;

        while(N > 1) {
            N /= 2;
            rounds++;
        }

        int totalTime = (rounds * A) + ((rounds - 1) * B);
        printf("%d\n", totalTime);
    }

    return 0;
}