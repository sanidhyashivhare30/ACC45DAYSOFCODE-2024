#include <stdio.h>

int main() {
    int T;
    printf("The number of test cases: ");
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int tuesdaycount = 0;

        for(int i = 1; i <= N; i++) {
            if(i % 7 == 2) {
                tuesdaycount++;
            }
        }
        printf("%d\n", tuesdaycount);
    }

    return 0;
}