//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>

#include "board.h"

int create_board(struct board_t **board, int width, int height) {
    if (board == NULL || width <= 0 || height <= 0) return 1;

    (*board) = calloc(1, sizeof(struct board_t));

    if ((*board) == NULL) {
        return 2;
    }

    char **brd = calloc(height, sizeof(char *));

    if (brd == NULL) {
        free((*board));
        return 2;
    }

    for (int i = 0; i < height; i++) {
        *(brd + i) = calloc(width + 1, sizeof(char));
        if (*(brd + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(brd + j));
            }
            free(brd);
            free((*board));
            return 2;
        }
    }

    for (int i = 0, j; i < height; i++) {
        for (j = 0; j < width; j++) {
            *(*(brd + i) + j) = '.';
        }
        *(*(brd + i) + j) = '\0';
    }

    (*board) -> width = width;
    (*board) -> height = height;
    (*board) -> board = brd;
    (*board) -> move_player_up = move_player_up;
    (*board) -> move_player_down = move_player_down;
    (*board) -> move_player_left = move_player_left;
    (*board) -> move_player_right = move_player_right;

    return 0;
}

void display_board(const struct board_t *board) {
    if (board != NULL && board -> board != NULL && board -> height > 0 && board -> width > 0) {
        for (int i = 0; i < board -> height; i++) {
            for (int j = 0; j < board -> width; j++) {
                printf("%c", *(*(board -> board + i) + j));
            }
            printf("\n");
        }
    }
}

void free_board(struct board_t *board) {
    if (board != NULL && board -> board != NULL && board -> height > 0 && board -> width > 0) {
        for (int i = 0; i < board -> height; i++) {
            if (*(board -> board + i) != NULL) {
                free(*(board -> board + i));
            }
        }
        free(board -> board);
        free(board);
    }
}

int set_player(struct board_t *board, int x, int y) {
    if (board == NULL || board -> board == NULL || x < 0 || x >= board -> width || y < 0 || y >= board -> height || board -> is_init) return 1;

    *(*(board -> board + y) + x) = '@';
    board -> is_init = 1;
    board -> player.x = x;
    board -> player.y = y;

    return 0;
}

struct board_t* move_player_up(struct board_t* board) {
    if (board == NULL || board -> board == NULL || board -> player.x < 0 || board -> player.x >= board -> width || board -> player.y < 0 || board -> player.y >= board -> height || !board -> is_init) return NULL;

    *(*(board -> board + board -> player.y) + board -> player.x) = '.';

    if (board -> player.y == 0) {
        board -> player.y = board -> height - 1;
    } else {
        board -> player.y -= 1;
    }

    *(*(board -> board + board -> player.y) + board -> player.x) = '@';

    return board;
}

struct board_t* move_player_down(struct board_t* board) {
    if (board == NULL || board -> board == NULL || board -> player.x < 0 || board -> player.x >= board -> width || board -> player.y < 0 || board -> player.y >= board -> height || !board -> is_init) return NULL;

    *(*(board -> board + board -> player.y) + board -> player.x) = '.';

    if (board -> player.y == board -> height - 1) {
        board -> player.y = 0;
    } else {
        board -> player.y += 1;
    }

    *(*(board -> board + board -> player.y) + board -> player.x) = '@';

    return board;
}

struct board_t* move_player_left(struct board_t* board) {
    if (board == NULL || board -> board == NULL || board -> player.x < 0 || board -> player.x >= board -> width || board -> player.y < 0 || board -> player.y >= board -> height || !board -> is_init) return NULL;

    *(*(board -> board + board -> player.y) + board -> player.x) = '.';

    if (board -> player.x == 0) {
        board -> player.x = board -> width - 1;
    } else {
        board -> player.x -= 1;
    }

    *(*(board -> board + board -> player.y) + board -> player.x) = '@';

    return board;
}

struct board_t* move_player_right(struct board_t* board) {
    if (board == NULL || board -> board == NULL || board -> player.x < 0 || board -> player.x >= board -> width || board -> player.y < 0 || board -> player.y >= board -> height || !board -> is_init) return NULL;

    *(*(board -> board + board -> player.y) + board -> player.x) = '.';

    if (board -> player.x == board -> width - 1) {
        board -> player.x = 0;
    } else {
        board -> player.x += 1;
    }

    *(*(board -> board + board -> player.y) + board -> player.x) = '@';

    return board;
}

