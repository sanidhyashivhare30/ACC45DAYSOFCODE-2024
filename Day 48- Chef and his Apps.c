#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z);
        int availableMemory = S - (X + Y);
        
        if(availableMemory >= Z) {
            printf("0\n");
        } else if ((S - X) >= Z || (S- Y) >= Z) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}