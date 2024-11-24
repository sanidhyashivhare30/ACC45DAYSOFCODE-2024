#include <stdio.h>

void countDivisors(int N, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    for(int i = 1; i <= N; i++) {
        if(N % i == 0) {
            if(i % 2 == 0)
                (*evenCount)++;
            else
                (*oddCount)++;
        }
    }
}

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, evenCount, oddCount;
        scanf("%d", &N);
        countDivisors(N, &evenCount, &oddCount);
        if(evenCount > oddCount)
            printf("1\n");
        else if(evenCount == oddCount)
            printf("0\n");
        else 
            printf("-1\n"); 
    }

    return 0;
}