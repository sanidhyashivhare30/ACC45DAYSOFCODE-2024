#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        
        if (W == X || W == Y || W == Z || W == (X + Y) || W == (X + Z) || W == (Y + Z) || W == (X + Y + Z)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}