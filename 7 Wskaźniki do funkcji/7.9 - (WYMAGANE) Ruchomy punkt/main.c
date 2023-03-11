#include <stdio.h>

#include "board.h"

int main() {
    int width = 0, height = 0, x = 0, y = 0, err_code = 0;
    struct board_t *board;
    char action = 0;

    printf("Enter width and height of the board:");
    if (scanf("%d %d", &width, &height) != 2) {
        printf("Incorrect input");
        return 1;
    }

    while(getchar() != '\n');

    if (width <= 0 || height <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    err_code = create_board(&board, width, height);

    if (err_code) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter player's initial coordinates (x, y):");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Incorrect input");
        free_board(board);
        return 1;
    }

    while(getchar() != '\n');

    if (x < 0 || x >= width || y < 0 || y >= height) {
        printf("Incorrect input data");
        free_board(board);
        return 2;
    }

    board -> player.x = x;
    board -> player.y = y;

    set_player(board, x, y);
    display_board(board);

    do {
        printf("Choose your action:");
        scanf("%c", &action);

        while (getchar() != '\n');

        if (action == 'w') {
            board -> move_player_up(board);
            display_board(board);
        } else if (action == 's') {
            board -> move_player_down(board);
            display_board(board);
        } else if (action == 'a') {
            board -> move_player_left(board);
            display_board(board);
        } else if (action == 'd') {
            board -> move_player_right(board);
            display_board(board);
        } else if (action == 'q') {

        } else {
            printf("Incorrect choice\n");
        }
    } while (action != 'q');

    free_board(board);
    return 0;
}


