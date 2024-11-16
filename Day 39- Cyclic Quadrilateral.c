#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);
        if(A + C == 180 && B + D == 180) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
