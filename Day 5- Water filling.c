#include <stdio.h>
int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);
    while(T--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3);
        int empty_bottles = (B1==0)+(B2==0)+(B3==0);
        if (empty_bottles >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }
    return 0;
}