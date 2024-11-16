#include <stdio.h>

int main() {
    int T;
    printf("The number of tset cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int tuesday_count = N / 7;
        if(N % 7 >= 2) {
            tuesday_count++;
        }
        printf("%d\n", tuesday_count);
    }

    return 0;
}
