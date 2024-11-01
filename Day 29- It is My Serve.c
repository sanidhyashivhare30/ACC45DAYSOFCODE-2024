#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int P, Q;
        scanf("%d %d", &P, &Q);

        int totalpoints = P + Q;
        if((totalpoints / 2) % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}