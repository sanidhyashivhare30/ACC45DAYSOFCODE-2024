#include <stdio.h> 

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int max_tastiness = max(a, b) + max(c, d);
        printf("%d\n", max_tastiness);
    }

    return 0;
}