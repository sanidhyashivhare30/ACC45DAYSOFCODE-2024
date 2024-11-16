#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int full_sets = N / 5;
        int remaining_gifts = N % 5;
        int coins = full_sets * 4 + remaining_gifts;
        printf("%d\n", coins);
    }
    return 0;
}
