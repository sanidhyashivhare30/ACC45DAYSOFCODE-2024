#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        int A[N];
        for(int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        } 
        qsort(A, N, sizeof(int), compare);
        int passing_mark = A[X - 1] - 1;
        printf("%d\n", passing_mark);
    }

    return 0;
}