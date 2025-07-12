#include <stdio.h>
#include <string.h>

#define MATCHES 3
#define PLAYERS 2

struct Player {
    char name[50];
    char country[50];
    int runs[MATCHES];
    int wickets[MATCHES];
    int points[MATCHES];
};

int calculatePoints(int run, int wickets) {
    int points = 0;

    // Points for runs
    if (run <= 25) points += 5;
    else if (run <= 50) points += 10;
    else if (run <= 75) points += 15;
    else points += 20;

    // Points for wickets
    points += wickets * 12;

    return points;
}

int main() {
    struct Player players[PLAYERS];

    // Input players
    for (int i = 0; i < PLAYERS; i++) {
        printf("\nEnter info for Player %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].name);

        printf("Country: ");
        scanf(" %[^\n]", players[i].country);

        for (int j = 0; j < MATCHES; j++) {
            printf("Match %d - Runs: ", j + 1);
            scanf("%d", &players[i].runs[j]);

            printf("Match %d - Wickets: ", j + 1);
            scanf("%d", &players[i].wickets[j]);

            // Calculate points immediately
            players[i].points[j] = calculatePoints(players[i].runs[j], players[i].wickets[j]);
        }
    }

    // Man of the Match for each match
    printf("\n--- Man of the Match (MOM) ---\n");
    for (int match = 0; match < MATCHES; match++) {
        int maxPoints = -1;
        int momIndex = -1;

        for (int i = 0; i < PLAYERS; i++) {
            if (players[i].points[match] > maxPoints) {
                maxPoints = players[i].points[match];
                momIndex = i;
            }
        }

        printf("Match %d: %s (%d points)\n", match + 1, players[momIndex].name, maxPoints);
    }

    // Man of the Series
    int seriesPoints[PLAYERS] = {0};

    for (int i = 0; i < PLAYERS; i++) {
        for (int j = 0; j < MATCHES; j++) {
            seriesPoints[i] += players[i].points[j];
        }
    }

    int mosIndex = (seriesPoints[0] > seriesPoints[1]) ? 0 : 1;

    printf("\n--- Man of the Series ---\n");
    printf("%s from %s with %d total points.\n",
           players[mosIndex].name, players[mosIndex].country, seriesPoints[mosIndex]);

    return 0;
}

