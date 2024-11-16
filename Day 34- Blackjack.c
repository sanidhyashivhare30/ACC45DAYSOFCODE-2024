#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        int third_number = 21 - (A + B);

        if(third_number >= 1 && third_number <= 10) {
            printf("%d\n", third_number);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
