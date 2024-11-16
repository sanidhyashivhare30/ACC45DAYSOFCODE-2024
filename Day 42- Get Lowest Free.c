#include <stdio.h>

int main() {
    int T;
    printf("The number of tset cases: ");
    scanf("%d", &T);

    while(T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        int min_price = A;
        
        if(B < min_price) {
            min_price = B;
        }
        if(C < min_price) {
            min_price = C;
        }
        int total_price = A + B + C - min_price;
        printf("%d\n", total_price);
    }

    return 0;
}
