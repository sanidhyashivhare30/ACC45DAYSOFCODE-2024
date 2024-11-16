#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int max_people;
        max_people = X / (2 * Y);
        printf("%d\n", max_people);
    }

    return 0;
}
