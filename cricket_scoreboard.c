#include <stdio.h>

int main() {
    int players, i, total = 0;
    printf("Enter number of players: ");
    scanf("%d", &players);

    int runs[players];
    printf("Enter runs scored by each player:\n");
    for(i = 0; i < players; i++) {
        scanf("%d", &runs[i]);
        total += runs[i];
    }

    printf("\nTeam Scorecard:\n");
    for(i = 0; i < players; i++) {
        printf("Player %d: %d runs\n", i+1, runs[i]);
    }

    printf("\nTotal Team Score = %d\n", total);
    return 0;
}