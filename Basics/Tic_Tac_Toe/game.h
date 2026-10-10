#ifndef GAME_H
#define GAME_H

void initialize_board(char board[3][3]);

void print_board(char board[3][3]);

int is_valid_move(char board[3][3], int choice);

void update_board(char board [3][3], int choice, char current_player);

int check_win(char board[3][3]);

int check_draw(char board[3][3]);

#endif