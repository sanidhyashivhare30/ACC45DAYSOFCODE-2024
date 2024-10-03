#include <stdio.h>

int main() {
    int T;
    printf("Number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X,&Y);
        // Case 1
        int points_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        // Case 2
        int points_B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        
        if (points_A_first > points_B_first) {
            printf("%d\n", points_A_first);
        } else {
            printf("%d\n", points_B_first);
        }
    }

    return 0;
}