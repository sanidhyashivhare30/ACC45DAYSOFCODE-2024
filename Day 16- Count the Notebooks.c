#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int notebooks = (N * 1000) / 100;
        printf("%d\n", notebooks);
    }

    return 0;
}