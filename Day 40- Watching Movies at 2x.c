#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int timeAt2xspeed = Y / 2;
    int timeAtnormalspeed = X - Y;
    int totalTime = timeAt2xspeed + timeAtnormalspeed;
    printf("%d\n", totalTime);

    return 0;
}
