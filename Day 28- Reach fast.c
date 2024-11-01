#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);

        int distance = abs(B - A);
        int steps = distance / K;
        if(distance % K != 0) {
            steps++;
        } 
        printf("%d\n", steps);
    }

    return 0;
}