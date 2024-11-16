#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        if(N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    return 0;
}