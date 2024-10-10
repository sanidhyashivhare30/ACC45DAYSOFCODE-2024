#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        if (Y * 2 >= X) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}