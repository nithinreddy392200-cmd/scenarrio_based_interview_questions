#include <stdio.h>

int main() {
    int votes[3] = {0}, choice, i;

    for(i=0; i<5; i++) {
        printf("Vote for candidate (1-3): ");
        scanf("%d", &choice);
        if(choice >=1 && choice <=3)
            votes[choice-1]++;
    }

    int max = 0, winner = 0;
    for(i=0; i<3; i++) {
        if(votes[i] > max) {
            max = votes[i];
            winner = i+1;
        }
    }

    printf("Candidate %d wins with %d votes!\n", winner, max);
    return 0;
}