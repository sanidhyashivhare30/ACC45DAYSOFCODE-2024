#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        if(X % N == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}