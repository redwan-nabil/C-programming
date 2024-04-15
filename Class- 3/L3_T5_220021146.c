#include <stdio.h>

int main() {
    int rounds;

    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);

    int aliceScore = 0, bobScore = 0;

    for (int i = 1; i <= rounds; i++) {
        int aliceMeters, bobMeters;

        printf("Round %d:\n", i);
        printf("Enter the meters run by Alice: ");
        scanf("%d", &aliceMeters);

        printf("Enter the meters run by Bob: ");
        scanf("%d", &bobMeters);

        if (aliceMeters > bobMeters) {
            aliceScore++;
            printf("Alice wins round %d.\n", i);
        } else if (bobMeters > aliceMeters) {
            bobScore++;
            printf("Bob wins round %d.\n", i);
        } else {
            printf("Round %d is a draw.\n", i);
        }
    }

    printf("\nFinal Scores:\n");
    printf("Alice: %d\n", aliceScore);
    printf("Bob: %d\n", bobScore);

    if (aliceScore > bobScore) {
        printf("Alice wins the tournament!\n");
    } else if (bobScore > aliceScore) {
        printf("Bob wins the tournament!\n");
    } else {
        printf("The tournament ends in a draw!\n");
    }

    return 0;
}
