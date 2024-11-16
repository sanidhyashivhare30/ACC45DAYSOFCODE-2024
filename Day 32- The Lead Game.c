#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int player1_score = 0, player2_score = 0;
    int max_lead = 0, winner = 0;

    for(int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);
        player1_score += S;
        player2_score += T;

        int lead = abs(player1_score - player2_score);
        if(lead > max_lead) {
            max_lead = lead;
            winner = (player1_score > player2_score) ? 1 : 2;
        }
    }
    printf("%d %d\n", winner, max_lead);

    return 0;
}