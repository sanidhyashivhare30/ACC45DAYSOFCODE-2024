#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);
        int score = (X * 3) + ((N - X) * -1);

        if(score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}
