#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);
        int S[N];
        for(int i = 0; i < N; i++) {
            scanf("%d", &S[i]);
        }
        char V[N + 1];
        scanf("%s", V);
        int min_size = INT_MAX;
        for(int i = 0; i < N; i++) {
            if(V[i] == '0' && S[i] < min_size) {
                min_size = S[i];
            }
        }
        printf("%d\n", min_size);
    }

    return 0;
}