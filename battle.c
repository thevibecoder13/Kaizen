#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayGrid(char grid[3][3]) {
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", grid[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

int main() {
    int gold[3];
    int guessed[9] = {0};
    char grid[3][3];
    int lives = 3, found = 0;
    int choice, i, j, flag;

    srand(time(NULL));

    // Initialize grid with numbers 1–9
    char ch = '1';
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            grid[i][j] = ch++;
        }
    }

    // Generate 3 unique gold positions
    for (i = 0; i < 3; i++) {
        flag = 1;
        while (flag) {
            gold[i] = rand() % 9 + 1;
            flag = 0;
            for (j = 0; j < i; j++) {
                if (gold[i] == gold[j]) {
                    flag = 1;
                    break;
                }
            }
        }
    }

    printf("BATTLEBOT – FIND THE GOLD \n");
    printf("Gold = G | Bomb = X\n");
    printf("Lives: 3\n");

    // Game loop
    while (lives > 0 && found < 3) {
        displayGrid(grid);

        printf("\nEnter position (1–9): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 9) {
            printf("Invalid choice!\n");
            continue;
        }

        if (guessed[choice - 1]) {
            printf("Already guessed!\n");
            continue;
        }

        guessed[choice - 1] = 1;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        flag = 0;
        for (i = 0; i < 3; i++) {
            if (choice == gold[i]) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            printf("GOLD FOUND!\n");
            grid[row][col] = 'G';
            found++;
        } else {
            printf("BOMB! Life lost!\n");
            grid[row][col] = 'X';
            lives--;
        }

        printf("Gold found: %d / 3\n", found);
        printf("Lives left: %d \n", lives);
    }

    // Final result
    displayGrid(grid);

    printf("\n GAME OVER \n");
    if (found == 3) {
        printf("YOU WON! All gold collected!\n");
    } else {
        printf("You lost all lives.\n");
        printf("Gold was at positions: ");
        for (i = 0; i < 3; i++)
            printf("%d ", gold[i]);
        printf("\n");
    }

    return 0;
}
