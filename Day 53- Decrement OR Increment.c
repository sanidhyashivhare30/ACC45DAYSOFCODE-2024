#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N >= 0 && N <= 1000) {
        if(N % 4 == 0) {
            N += 1;
        } else {
            N -= 1;
        }
        printf("%d", N);
    }

    return 0;
}