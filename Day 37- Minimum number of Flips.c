#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        int sum = 0, count1 = 0, count_minus1 = 0;

        for(int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum += A[i];
            if (A[i] == 1) {
                count1++;
            } else {
                count_minus1++;
            }
        }
        if(sum % 2 != 0) {
            printf("-1\n");
        } else {
            int flips = abs(count1 - count_minus1) / 2;
            printf("%d\n", flips);
        }
    }

    return 0;
}
