#include <stdio.h>
#include <stdlib.h>

int minFlipsToZeroSum(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if(abs(sum) % 2 != 0) {
        return -1;
    }
    return abs(sum) / 2;
}

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int A[N];
        for(int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        int result = minFlipsToZeroSum(A, N);
        printf("%d\n", result);
    }

    return 0;
}